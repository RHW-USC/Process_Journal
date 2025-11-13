#include "I2Cdev.h"     // Library for I2C communication abstraction
#include "MPU6050.h"    // Library for interfacing with the MPU6050 accelerometer + gyroscope sensor

// -----------------------------
// Linked List Implementation
// -----------------------------

// Define a node structure for a singly linked list
struct node {
    int value;             // Stores a data value (here used for posture level readings)
    struct node* next;     // Pointer to the next node in the list
};
typedef struct node node_t; // Creates an alias for 'struct node' called 'node_t'

// Frees all memory in the linked list and resets the head pointer
void deleteList(node_t **head) {
    node_t *current = *head;
    node_t *next;

    while (current != NULL) {
        next = current->next;  // Save pointer to next node
        free(current);         // Free current node
        current = next;        // Move on to the next node
    }

    *head = NULL;  // After deletion, reset the list head to NULL
}

// Allocates and returns a new node with a given integer value
node_t *createNewNode(int value){
    node_t *result = (node_t*) malloc(sizeof(node_t));  // Dynamically allocate memory for the new node
    result->value = value;                              // Assign value to node
    result->next = NULL;                                // Initialize 'next' pointer as NULL
    return result;
}

// Inserts a new node at the beginning of the linked list
node_t *insertAtHead(node_t **head, node_t *node_to_insert){
    node_to_insert->next = *head;   // New node points to current head
    *head = node_to_insert;         // Head pointer now points to the new node
    return node_to_insert;          // Return the inserted node
}

// Inserts a node directly after a specified node in the list
node_t insertAfterNode(node_t *node_to_insert_after, node_t *newnode){
    newnode->next = node_to_insert_after->next;   // Link new node to next in chain
    node_to_insert_after->next = newnode;         // Update previous node to point to new node
}

// Searches the list for a node containing a specific value
node_t *findNode(node_t *head, int value){
    node_t *tmp = head;              // Start from the list head
    while (tmp != NULL){             // Traverse until end of list
        if(tmp->value == value)      // If a node matches the search value
            return tmp;              // Return pointer to that node
        tmp = tmp->next;             // Move to next node
    }
    return NULL;                     // Return NULL if value not found
}

// Prints all node values in the list to the Serial monitor
void printList(node_t *head){
    node_t *temporary = head;

    while (temporary != NULL){
        printf("%d - ", temporary->value);  // Print node value
        temporary = temporary->next;        // Move to next node
    }
    printf("\n");  // End of list
}

// -----------------------------
// Main Code for Posture Tracker
// -----------------------------

MPU6050 mpu;                // Create an MPU6050 sensor object
int16_t ax, ay, az;         // Raw accelerometer readings (X, Y, Z)
int16_t gx, gy, gz;         // Raw gyroscope readings (X, Y, Z)

const int vibrationPin = 2; // Pin used to control vibration motor
bool isPostureGood = false; // Flag to track posture status

unsigned long previousMillis = 0;  // Stores last time posture was evaluated
const long interval = 500;        // Interval between evaluations (in milliseconds)

node_t *postureLevels = NULL;      // Linked list head pointer to store posture readings
int averagePostureLevel = 0;

void setup() {
    Serial.begin(115200);          // Initialize serial communication at 115200 baud
    delay(1000);                   // Give time for Serial Monitor to open

    // Configure vibration motor control pin
    pinMode(vibrationPin, OUTPUT);

    // Initialize I2C communication based on library settings
    #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
        Wire.begin();              // Use standard Arduino I2C
    #elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
        Fastwire::setup(400, true); // Use Fastwire implementation (400kHz)
    #endif

    Serial.println("Initializing MPU6050...");
    mpu.initialize();              // Initialize MPU6050 sensor

    // Test the connection to ensure sensor is detected
    if (!mpu.testConnection()) {
        Serial.println("MPU6050 connection failed!");
        while (1); // Stop program if sensor not connected
    }
    Serial.println("MPU6050 connection successful!");

    // Optionally reset accelerometer and gyroscope offsets to zero
    mpu.setXAccelOffset(0);
    mpu.setYAccelOffset(0);
    mpu.setZAccelOffset(0);
    mpu.setXGyroOffset(0);
    mpu.setYGyroOffset(0);
    mpu.setZGyroOffset(0);
}

void loop() {
    // Read raw accelerometer and gyroscope values from the MPU6050
    mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

    // Insert the current accelerometer Z-axis reading at the head of the list
    insertAtHead(&postureLevels, createNewNode(az));

    

    // Get the current time in milliseconds since boot
    unsigned long currentMillis = millis();

    // Check if one second has passed since the last posture check
    if (currentMillis - previousMillis >= interval){
        previousMillis = currentMillis;  // Update timer

        // Compute the average posture level from the linked list
        node_t *tmp = postureLevels;
        int sumOfPostureLevels = 0;
        int numOfPostureLevels = 0;

        while (tmp != NULL){
            sumOfPostureLevels += tmp->value;   // Add up readings
            tmp = tmp->next;                    // Move to next reading
            numOfPostureLevels++;               // Increment reading count
        }

        // Print average Z-axis reading to Serial Monitor
        averagePostureLevel = (sumOfPostureLevels / numOfPostureLevels);

        Serial.println(averagePostureLevel);

        // Determine if posture is good based on threshold
        isPostureGood = averagePostureLevel > 10100;

        // Clear the linked list to start fresh for the next interval
        deleteList(&postureLevels);
    }

    // Control vibration motor based on posture status
    if (isPostureGood){
        digitalWrite(vibrationPin, LOW);   // Turn off vibration if posture is good
    }
    else{
        digitalWrite(vibrationPin, HIGH);  // Turn on vibration if posture is bad
    }

    delay(100);  // Delay for readability (approx. 10 times per second loop rate)
}
