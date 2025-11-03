// Load Wi-Fi library
#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESPmDNS.h>

#include "I2Cdev.h"
#include "MPU6050.h"

const char* ssid = "";
const char* password = "";

bool isPostureGood = false; 

WebServer server(80);

/* MPU6050 default I2C address is 0x68 */
MPU6050 mpu;

int16_t ax, ay, az;
int16_t gx, gy, gz;

void homePage() {
  String html = "<!DOCTYPE html>";
  html += "<html>";
  html += "<head></head>";
  html += "<body>";
  html += "<h1>MPU6050 Data</h1>";
  html += "<p>AZ: <span id='azValue'>0</span></p>";
  html += "<style>";
  html += "body{";
  html += "    background-color: yellow";
  html += "}";
  html += "</style>";
  html += "<script>";
  html += "function updateData() {";
  html += "  fetch('/data').then(response => response.json()).then(data => {";
  html += "    document.getElementById('azValue').textContent = data.az;";
  html += "    if(data.postureGood){";
  html += "       document.body.style.backgroundColor = 'green';";
  html += "    }";
  html += "    else{";
  html += "       document.body.style.backgroundColor = 'red';";
  html += "    }";
  html += "  });";
  html += "}";
  html += "setInterval(updateData, 200);"; // update every 200ms (~5Hz)
  html += "</script>";

  html += "</body>";
  html += "</html>";

  server.send(200, "text/html", html);
}

void setup() {
  Serial.begin(115200);
  delay(1000); // Give some time for Serial to start

  // Start I2C interface
  #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
    Wire.begin(); 
  #elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
    Fastwire::setup(400, true);
  #endif

  Serial.println("Initializing MPU6050...");
  mpu.initialize();

  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed!");
    while (1);
  }
  Serial.println("MPU6050 connection successful!");

  // Optional: reset offsets to 0
  mpu.setXAccelOffset(0);
  mpu.setYAccelOffset(0);
  mpu.setZAccelOffset(0);
  mpu.setXGyroOffset(0);
  mpu.setYGyroOffset(0);
  mpu.setZGyroOffset(0);

  // Connect to Wi-Fi Network
  Serial.print("Connecting to ");
  Serial.print(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/", homePage);
  server.on("/data", []() {
    String json = "{";
    json += "\"ax\":" + String(ax) + ",";
    json += "\"ay\":" + String(ay) + ",";
    json += "\"az\":" + String(az) + ",";
    json += "\"postureGood\":";
    json += (isPostureGood ? "true" : "false");
    json += "}";
    server.send(200, "application/json", json);
  });

  server.begin();
}

void loop() {
  // Read raw accel/gyro data
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  isPostureGood = (az > 14500);

  // Print values to Serial
  Serial.print("Accel: ");
  Serial.print(ax); Serial.print(", ");
  Serial.print(ay); Serial.print(", ");
  Serial.print(az);

  Serial.print(" | Gyro: ");
  Serial.print(gx); Serial.print(", ");
  Serial.print(gy); Serial.print(", ");
  Serial.println(gz);

  delay(100); // Small delay to make output readable (~10Hz)

  server.handleClient();
}
