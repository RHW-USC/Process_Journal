# Process Journal
<b>Class:</b> DES222 <br>
<b>Assignment:</b> Tasks 2 and 3 <br>
<b>Group:</b> Individual <br>
<b>Member:</b> Ryan Wells

<b>Video Proposal:</b> https://youtu.be/9RdAgVsLDrc

# 1 Introduction

This process journal will be documenting the design and creation of a project for tasks 2 and 3 in DES222. The project itself will be a responsive, and physical creation that will use a microcontroller (such as a Raspberry Pi, ESP32, or a Micro:Bit). This assignment has the option to be developed in a group of up to 3 people, however I have decided to develop this solution myself, so that I can challenge myself while also having complete creative control.

A fundamental attribute my solution must meet is that it must be Responsive. Responsive in this context refers to the dynamic reaction of a system that responds to external stimuli. An example of this is an individual wearing a smartwatch with a built-in heart monitor. The Input is the user's heart rate, and the response is a graphical display of the user's real-time heart rate. The solution for this assignment doesn’t need to be a wearable device; it can be anything from custom hardware to environmental sensors fed into a web application. 

## 1.1 Workshop Design Practice

Throughout this course, several key design areas are identified to increase design focus and productivity. These aspects identify the <b>Form</b>, <b>Interaction Configuration</b>, <b>What Input is Being Responded to?</b>, and <b>What kind of output does it respond with?</b>

A provided tool to help develop my brainstorming skills was the 'Responsive Roulette' tool in Week 6's Workshop (https://tgifford-usc.github.io/ResponsiveRoulette/). This tool generates several random answers for the different design aspects mentioned above. I was tasked with creating a 'solution' for this random combination to help me learn to think outside the box. The generated prompts I was given were the following.
<br>

### Generation #1

<b>Form:</b> Mobile App<br>
<b>Interaction Configuration:</b> Multiperson<br>
<b>What Input is being responded to?</b> Location<br>
<b>What kind of output does it respond with?</b> Visual

An idea for this is a hide-and-seek mobile application that hiders install to see where the other hiders are hiding and where the seeker is. Of course, everyone's location would be tracked using the app, and their location would be displayed using a generic map API like Google Maps, with hiders’ locations marked with a blue pin, and the seeker in red.

### Generation #2

<b>Form:</b> Hybrid<br>
<b>Interaction Configuration:</b> Non-Human<br>
<b>What Input is being responded to?</b> Environmental Sensors<br>
<b>What kind of output does it respond with?</b> Kinetic

This generation is inherently more complex than the last generation. An idea for this generation is a robot that is programmed to move in a straight line until one of its sensors detects an object in its way. Upon this detection, it will turn to avoid contact. The robot can also transmit its sensor data to a web application so that (A) the robot can refer to its detection history, and (B) a human can observe and track its movement.

## 1.2 Potential Ideas for Project

Ideally, the project I develop for this assignment will solve a problem that I personally experience. The solution doesn’t need to reinvent the wheel, but it does need to have my own unique twist that makes it unique. The following are potential solutions I have come up with that could be interesting to further develop. 
<br><br>
<b>(1) Smart Home Device</b><br> As I have a smart home setup already established with Home Assistant, my first thought is to create a smart device that can link into that already established infrastructure. However, this solution will be complicated to develop and integrate—especially for the shorter time frame for this project. In addition, it poses difficulty actually demonstrating this project in class as there is no infrastructure established at the university. Because of this, if this solution is pursued it would require a self-contained feature set that exists outside the Home Assistant environment for demonstration purposes, which may be outside of the scope of this project.<br><br>
<b>(2) Posture Tracker</b><br>
Another idea I’ve been playing with in my head is a mobile web application that uses a phone's built-in accelerometer and gyroscope to determine if the user is slouching over and has bad posture. This premise is simple in prospect, which makes it more feasible for this assignment. The biggest issue I see with this idea is simply the fact that 90% of the time a phone is placed into the pants of an individual. This would mean that the accelerometer would be inaccurate in displaying the angle of a user's posture. Therefore, if this idea is pursued it may be necessary to create a dedicated gyroscope attachment a user places onto their shirt for more accurate tracking.<br><br>
<b>(3) Hide and Seek Application</b><br>The Hide and Seek solution brainstormed previously could be a good option, because of its simpler premise. This solution would be self-contained, as it doesn’t require any existing infrastructure to work—like with the Home Assistant smart device.<br><br>
<b>(4) Video Responsive RGB Strip</b><br>One of the coolest uses of LED's I’ve ever seen is placing an LED strip behind a TV and having the LED's mimic the color on the TV. This project would undoubtedly be large in scale—especially since commercial releases of this concept can easily exceed $500 AUD. This prospect would require live video analysis of a display which may be more than a Micro:Bit or ESP32 can handle. More research into this concept in particular is useful since there are many unknowns that need to be cleared up before a final decision can be made. 

<img src="./images/RGB%20Backlight.png" alt="RGB Backlight Example" width="1000">


## 1.3 Pros and Cons

To help narrow down what this assignment should focus on, I'll do a pros and cons list for each item mentioned as a potential idea.

### Smart Home Device
- Pros
    - It's Awesome. Something that I would use all the time and would encourage me to dive outside my comfort zone<br>
    - Existing Infrastructure. Takes advantage of pre-existing infrastructure which makes this prospect a niche opportunity<br>

- Cons
    - Complicated. Would take significantly longer to develop<br>
    - Cost. Expensive depending on materials required to build solution

### Posture Tracker
- Pros
    - Simple. Significantly lower scope, so more feasible to complete under short development period<br>
    - Solves a problem. As I personally have low posture, this prospect would assist me in efforts to correct my posture
    - Cheap. Would require significantly fewer resources compared to other projects mentioned. 

- Cons
    - Not as challenging. For this project, I want to challenge myself with something I haven't done before.

### Hide and Seek Application
- Pros
    - Fun. The end goal for this project would be really enjoyable<br>
    - Challenging. As this project would require several devices communicating with each other, which fulfills my request for a challenging project, without being potentially overbearing like the Smart Home Device 

- Cons
    - Very Niche. This project, when completed, could only be used when playing hide and seek. This in some ways defeats the goal of solving a problem I often face

### Video Responsive RGB Strip
- Pros
    - It's Awesome. Something that I would use all the time and would encourage me to dive outside my comfort zone<br>

- Cons
    - Cost. RGB strip would be very expensive, especially getting enough to go around a TV
    - Already Developed. This prospect already exists in a commercial setting, which considering how complicated this would be, defeats the point in my eyes
    - Very Complicated. This project would be the most complicated to develop out of this list, and would be infeasible for the scope of this assignment.

## 1.4 Selection

After analysing the Pros and Cons list above, I believe the best option for this assignment is the <b>Posture Tracker</b>. This is for several reasons. Firstly, it was the option with the most pros and least cons. That instantly got my attention as this project needs to be a good compromise between what the assignment is asking of me, and what I want my project to be. Despite the simpler prospect, I believe there is still plenty of depth to be seen here. Specifically, in terms of the external device that would need to be created to 
accurately read a user's posture level in order for the solution to still meet the task's criteria of being 'responsive'.

# 2 Research
This section of my process journal will focus on the research for this project. Those include, but are not limited to - the technological, material, programming, time, and economical considerations. As I have mentioned several times in this process journal, the scope of this project is very important—so that it can be completed in time for its due date. But even with the simpler premise of the <b>Posture Tracker</b>, it's still very possible to over-complicate things which would void the advantage of choosing a simpler premise.

This research segment will double as not just documentation - but as a way to record what other devices have done and see what already works; and to determine whether or not they are worth looking further into to ensure the end result doesn't get too crazy.

## 2.1 What is Posture?
In order to properly develop a solution geared to improving posture, it is crucial to understand <b><i>what posture is</b></i>. According to scholars Luis and Rosario, posture is defined as the stabilizing of the joints of the skeletal system through coordinated interaction of skeletal muscles, which maintain body segments in alignment against gravity and serve as the basis for movement and non-verbal communication.

<img src="./images/Posture Diagram.webp" alt="Upright GO 2 Image" width="400">

Luis and Rosario also emphasis that simply 'standing up straight' isn't the only way to improve posture. A mixture of different approaches will assist, including: <br>
- <b>Excercise and Re-Education:</b> Specific exercises to strengthen weak muscles, stretch tight ones, and retrain movement patterns. This helps create lasting postural correction. 
- <b>Manual Therapies:</b> Chiropractic, osteopathy, and other hands-on approaches may help by correcting joint misalignments and improving mobility — but they must be combined with exercise to hold the benefits.
- <b>Awareness and Habits:</b> Learning to be aware of body position and developing new motor patterns is essential for long-term improvement.
- <b>Fascia and Muscle Chains:</b> Training that engages whole myofascial chains (not just isolated muscles) helps sustain better alignment.
- <b>Holistic Factors: </b>Psychological state, fatigue, and even footwear can influence posture — so improvement requires addressing lifestyle and emotional factors too.

A lot of these approaches are geared towards recovery which is beyond the intention of this device - which intends to simply correct posture. Because of this scope, it won't be aiming to replace <b>Manual Therapies</b>, or <b>Holistic Factors</b>, as they are done by medical professionals. Instead, simply aiming to train the user and their muscles in more in-line with what this device can do. As a result, <b>Excercise and Re-Education</b>, <b>Awareness and Habits</b>, and <b>Fascia and Muscle Chains</b> are going to be the main focus area's going forward.

In other words, this device is simply going to make the user aware when they have bad posture - show them what good posture <i>is</i> and therefore train the user into making healthy habbits.


## 2.2 Similar Existing Projects
To get a better idea of how to create a device that measures a user's posture, doing research into similar products can be a great way to determine what works, what doesn't, and the different approaches that exist. The following 3 products are the most interesting consumer-grade products I've seen that match the spirit of the solution I'm trying to make. 

### Upright GO 2
The Upright Go 2 is a small, lightweight sensor that attaches to your upper back using an adhesive strip. It detects the angle of your spine and shoulders, and when you start slouching, it gives a gentle vibration reminder. Pairs with a smartphone app to log posture data throughout the day. This specific product highlights the obtrusiveness such a product can have. Ideally, a product that does this while being less visible is ideal, otherwise it may become 'embarrasing' for the user to wear in public.
<br><br><img src="./images/Upright-GO-S.png" alt="Upright GO 2 Image" width="600">

### Lumo Lift
The Lumo Lift is similar to the Upright Go 2, where it is a clip-on device worn near the collarbone, usually held in place by a magnetic clasp. It monitors chest and shoulder alignment, buzzing if you lean forward or hunch. Data syncs with an app to track long-term posture habits and improvements. Note that in the image below, it is significantly smaller than the Upright GO 2.
<br><br><img src="./images/Lumo%20Lift.png" alt="Lumo Lift Image" width="600">

### Zikto Walk
Out of the three devices listed, the Zikto Walk is definitely the most unique. It is a fitness-style wristband that tracks arm swing and overall body balance while walking. By analyzing walking patterns and body movement, it estimates posture alignment and suggests improvements via a connected app. Arguably the most advanced product as it doesn't measure the back's alignment directly. This solution is also more socially accepted since smart wrist devices (like smart watches, and FitBits) are already worn by a large population.
<br><br><img src="./images/ZIkto%20Walk.jpg" alt="Zikto Walk Image" width="600">

<br>

It's reassuring to know that so many varied solutions for a posture analyser exist, and that I don't have to completely start from scratch. These distinct products are all trying to achieve the same goal but through various means. But for the purposes of my solution, I want a device that is as compact as possible while also being as user-friendly to use (and wear) as possible, while being visually aesthetic. For this reason, I would steer clear of the more visually hostile implementation found with the Upright GO 2, allthough I did like the dedicated holder the Upright GO 2 has for keeping the gyroscope in place, compared to the magnets found in the Lumo Lift. A good blend between the Lumo Lift's more minimalistic device and the Upright GO's neck-brace could work quite well. 

While I do like idea of the Zikto Walk, I don't think a wearable wrist device would be viable given the constraints of this project. The main thing that concerns me are that the microcomputer's available to me (ESP32, Micro:Bit, etc) are quite large. When concidering other aspects like the battery, wiring, etc, it is unlikely that a solution could be made that is easy to use and visually aesthetic. Whereas with the conventional approach I had in mind where a sensor is applied to the user's body, it is more feasable to hide certain components under the shirt of the user. There is also the barrier of development. As mentioned previously, a wearable wrist device like the Zikto Walk would be significantly harder to develop for since I would need to determine how the user's arm swings related to the user's posture, which would require significantly more R&D then I have the ability to. 

# 3 Design

## 3.1 Material Considerations
The main obstacle I foresee with this project is the size of the individual components. Since I'm limited to off-the-shelf parts, that means that I won't be able to create a single compact device that includes the main elements - such as the micro-computer, battery, wiring, sensors, etc. For the purposes of cost/time efficiency, I am going to focus on materials and technology that I have access to and/or experience with. <br>

### Micro Controller
The heart of this project. The micro controller will calculate if the current alignment of the user's back is straight based on a gyroscopic sensor.<br> The main two options available for this project are the Micro:Bit V2's, and ESP32's.

#### Micro:Bit
Last semester in DES221, the use of micro:bits was a fundamental aspect of that course. As a result, I not only have one purchased from that course, but I also have the knowledge to develop using it. Using that micro:bit would of course eliminate cost, but more importantly shorten development time since I won't need to learn how to use a Micro:Bit. The Micro:Bit V2 additionally contains a built-in 3-axis accelerometer. It can measure tilt, pitch and roll. However, it does not have a gyroscope. Relying purely on an accelerometer means that if the user is moving (walking and especially running), the data can very quickly become noisy and unreadable. To avoid this would require an additional IMU (Inertial Measurement Unit), which can include <b>both</b> a gyroscope and accelerometer - effectively eliminating that advantage. A Micro:Bit is also limited in what it can do. The Micro:Bit V2 does not have any Wi-Fi or Bluetooth capabilities and is lacking in computing power.

#### ESP32
The ESP32 is the micro controller recommended for this course, and has benefits when compared to the Micro:Bit V2. It has built-in Wi-Fi and Bluetooth, and is significantly more powerful than the Micro:Bit V2. While I don't actively have experience working with ESP32's, I have direct access to several thanks to a bulk purchase I made a while ago. For me, this means that I have the option to use multiple ESP32's, even if that is unlikely. Unfortunately, the ESP32 doesn't contain either a gyroscope or an accelerometer. Therefore, the use of an external IMU will be necessary if an ESP32 is chosen for the project. Additionally, I have never used an ESP32 before, so developing for it will inherently be more complicated (especially since ESP32's have a more complicated IDE inherently). However, this has the side-effect of increasing the challenge of this project which was an attribute I was concerned about when choosing what project to pursue earlier in this project journal.

### Sensors
As mentioned when talking about the micro controllers, an IMU (Inertial Measurement Unit) will be critical for actually knowing the relative state of the user's posture. The following sensors were the most feasible sensors I've found that can be used with both a Micro:Bit V2 and an ESP32 (although, easier to set up with ESP32).

#### MPU-6050
- 3-axis accelerometer + 3-axis gyroscope  
- Very Cheap  
- Simple to use  
- Good for basic tilt/posture detection  

#### MPU-6886
- 3-axis accelerometer + 3-axis gyroscope  
- Small Size  
- Low Power  
- Slightly better performance and lower noise than MPU-6050  

#### ICM-20948
- 3-axis accelerometer + 3-axis gyroscope + 3-axis magnetometer  
- Low noise  
- More expensive than MPU-6050 and MPU-6886  
- More setup required  
- Allows for more precise measurements  

### Battery
An ESP32 typically operates between 3.3V - 3.6V, with power consumption varying based on usage. Whereas a Micro:Bit requires a stable 3V input. Both of the following batteries are part of the 'Lithium' family, and depending on the specific mAh of the battery, can be used for both Micro:Bit V2 and ESP32's.

#### Li-ion (Lithium Ion) Batteries
- Family of rechargeable lithium-based cells (different chemistries exist).  
- Often found in rigid cylindrical or prismatic cases.  
- Typically high energy density (Wh/kg), but exact value depends on the chemistry.  
- Mechanically robust and less likely to show visible swelling than pouch cells.  
- Require proper charging and protection  
- Vulnerable to overcharge, short, heat or puncture.  

#### Single Cell LiPo (Lithium Polymer) Batteries
- A pouch (soft-pack) style of lithium cell (still part of the lithium-ion family).  
- Uses a polymer pouch construction  
- Electrolyte inside LiPo batteries may be gel-like or liquid contained in the pouch.  
- Compact, flat/rectangular and lightweight.  
- Energy density is comparable to other Li-ion cells (sometimes slightly lower depending on chemistry).  
- More prone to visible swelling and mechanically fragile.  
- Needs proper charging and protection.  

## Vibration Motors
In order for this device to be considered 'responsive', it needs to not only react to stimuli, but also have a reaction to that stimuli. Vibration motors make the most sense, as the user needs immediate correction if their posture gets bad.

#### Seeed Mini Vibration Motor
- Compact size, coin/flat type  
- Voltage: 3 V (works from ~2–3.6 V)  
- Produces a light to moderate vibration  
- Needs a transistor/MOSFET when controlled by an ESP32  

#### 10 mm Cylindrical Vibrator Module
- Voltage: 3V – 5V on average  
- Higher vibration strength compared to coin motors of similar size  
- Slightly bulkier than coin motors  
- Needs a transistor/MOSFET when controlled by an ESP32  

### General Materials
In this context, when I say general materials, I'm referring to the materials used for the construction of the device itself. These can include, but are not limited to:

#### Micro Controller Attachment Material
Both <b>Velcro</b> and <b>Magnets</b> are the obvious choices for attaching the device to the user. They are seen on the Upright GO 2 and the Lumo Lift respectively, and are a cheap, lightweight solution for attachment. A final decision can't be made at this stage regarding the use of either, as further testing will conclude how each material fares in terms of wearability and strength. However, I have a keen interest in magnets, as that will allow for more modularity, and a more minimalistic appearance. Additionally, a rubber band will be used to wrap around the user's torso to hold the micro controller, battery, and vibration motor.

#### Case Material
The actual case will consist of the structure designed to hold the various components that comprise the final device the user will wear. For this case, the following materials are the most realistic options for developing this project with. The final design may or may not use a combination of all of these, however the primary case material will be made with one of the following:  

- 3D Printed Plastic  
  - Pros  
    - Accessible through university  
    - Durable  
    - Cheap  
    - Have used before in previous DES221 project  
  - Cons  
    - Can't make last-minute additions at home  

- Timber  
  - Pros  
    - Durable  
    - Ability to construct at home  
  - Cons  
    - Heavy  
    - Expensive  

- Cardboard  
  - Pros  
    - Very Cheap  
    - Efficient to create with  
  - Cons  
    - Very Weak  
    - May not be structurally sound enough to hold other components  

### Material Choices
Throughout the process of writing down the materials in this process journal, I have been determining what would work well for my proposed device. Given the nature of the device, in that its purpose is to measure the posture of its wearer. Because of this, I have concluded that more advanced components would suit not just the scope of this project, but fulfill my desire for a challenge as well.

#### Micro Controller - ESP32
For the micro controller, the <b>ESP32</b> seems to be the best choice for this project, as it's more powerful and has built-in communication chips. Honestly, both micro controllers can work for this project - however the fact that I don't know how to use an ESP32 is why I want to pursue this further.

#### Sensor - MPU-6886 or MPU-6050
For the sensor, both the <b>MPU-6886</b> and the <b>MPU-6050</b> are so similar that either one could work for this device. This is because they are both affordable, and work well natively with an ESP32. However, preferably, I would choose an MPU-6886, simply because it's slightly more advanced and reduces its random noise in its reading.

#### Battery - LiPo (Lithium Polymer) Battery
The LiPo battery will suit this project better, as it's slim, affordable, and lightweight. Additionally, it has energy density on par with other lithium-based options. But primarily, it's shape will make it easier to attach comfortably to the user.

#### Vibration Motor - 10 mm Cylindrical Vibrator Module
As mentioned several times over this process journal, the final solution needs to be as minimalistic and functional as possible. The 10 mm Cylindrical Vibrator Module can achieve this by having a stronger vibration compared to other options whilst still being a smaller size. This ensures the wearer can feel the vibration when their posture has slouched, without feeling any unnecessary weight in addition to what the final solution will already weigh.

#### Case Material - 3D Printing
3D printing is very much the obvious choice for this device. It's affordable, lightweight, durable and is readily available at the university.


## 3.2 Prototype Sketches
Below are some proposed prototype sketches, made using the materials decided previously.

### Prototype Sketch 1
<img src="./images/Design 1.jpg" alt="Prototype Sketch 1" width="600">

With this first initial design, I wanted to go for something simular to the existing solutions i've seen. Specifically, I really liked how the Lumo Lift had the sensor rest under the shirt near the neck. I have done something simular here, with the MPU-6886 sensor being separate from the elastic band the user is wearing around his chest. Doing this, will reduce the stress on the shirt had all the components been placed at the same spot as the sensor, as well as making it less top heavy for the user. The sensor will be held up with a clip that clings to the user's collar. Additionally, an elastic band has been placed around the user's chest that contains the micro controller, battery and vibration module. Each component will have a custom 3D printed container, as that will help protect these sensitive components, as well as allow velcro to be easily applied. Velcro is also applied to the elastic band as well, so that these components can be easily detached for whatever reason. The ESP32 is placed at the center (the yellow module) so that it has a clear connection to the other components as well. 

### Prototype Sketch 2
<img src="./images/Desgin 2.jpg" alt="Prototype Sketch 2" width="600"><br>
This design is very simular to the first one, except with this one there are 2 major changes. Firstly, the elastic band has been moved up above the gut. This was done, because after reflecting on the original design, it occured that having the band wrap around the chest could cause difficulty breathing - especially if the user is particularly active. Secondly, the clip at the collar has been replaced for duel magnets that rest perpendicular to the MPU-6886 sensor. This change was made for 2 reasons. Aesthetics - avoiding an ugly pin pertruding at the top of the collar, and Grip - 2 perpendicular magnets will allow for finer adjustments from the user, whilst providing more strength then a single clip. As a result of this increased strength, the user in theory should be able to be more active with this device on without it coming off as easily.


# 4 Component Testing and Soldering

## 4.1 ESP32 Test Project
To better understand how to use an ESP32 for this project, I decided to experiment with a personal project. As mentioned previously, I have a smart home integration using home assistant. With that integration, somes lights are from a brand called 'govee', and while they are good value and provide good RGB, they don't communicate over zigbee - instead they use Wi-Fi and/or Bluetooth. To get around this, I used a cloud API that contacts govee's servers directly to send a signal through my govee account to my lights. While this worked, It posed issues, such as - limited to 10 requests per minute, if Wi-Fi ever goes down I am locked out of my lights, and response times were noticably slow when compared to the native zigbee lights already integrated. As this problem has always been on the back of my mind, I figured that solving this would be a really good learning opportunity since it is addressing a problem I had.

Instead, what I ended up doing was using an ESP32 as a bluetooth proxy that can allow home assistant to communicate with the govee lights locally. Inplmenting this was difficult, as this was the first major project i've done with an ESP32. I ran into issues connecting the ESP32 to my computer during this process, which I found was because; A) the USB-C cable I was using was not a data cable - instead it only delivered power, and B) My operating system didnt have the proper drivers installed to communicate with the ESP32.  Additionally, Learning how to flash the ESP32 on linux was especially challenging since this specific solution had a [community ready-made file](https://esphome.io/projects/) available to use that I wasn't familar with. 

Afterward solving those initial set backs and connecting the ESP32 to home assistant, I can now control my govee lights locally using bluetooth. I'm glad I experimented with this initial project, because it was simple enough to let me understand the basics about an ESP32, while forcing me to solve the initial connection issues in an environment where I have more community support. 

## 4.2 MPU-6050 Configuration
The choice to use either the MPU-6886 or the MPU-6050 ultimately comes down to price and ease of access as they both ultimately serve the same purpose. Even though the MPU-6886 was preferred because of the added features, I ultimately purchased the MPU-6050 due to cheaper listing on amazon and faster delivery times. Upon arrival, the MPU-6050 came with two distinct set of pins, which means that I need to solder the set of pins on that would best suit my project. Considering how this project will ultimately take place on a breadboard attached to the users waist, I decided to go with the straight set of set included, compared to the L shaped pair of pins that. <br>
<br>
Allthough it's been a while, I have done soldering in high school for certain STEM related assignments - so I didn't have to worry about the soldering itself. Additionally, my Dad already had a soldering iron in his shed that I could use to solder the pins to the MPU-6050. This means I didnt have to wait for a dedicated university workshop to solder anything. After a quick google search, and a YouTube tutorial to remind myself on safe soldering practices - I successfully soldered the MPU-6050 to pins.
<br><br>
<b>Solder Iron</b>:
<br>
<img src="./images/soldier iron.jpg" alt="Solder Iron" width="600">
<br>
<b>MSP-6050 soldered onto pins</b>:
<br>
<img src="./images/6050 soldered.jpg" alt="MSP-6050 Soldered" width="600">

After the soldering was complete, I needed to test that it was functional and that I correctly soldered it together. To do this, my plan was to use the knowledge developed with the test project I conducted to flash the ESP32 with a locally hosted website that would respond to the MSP-6050 depending on it's orientation. To do this, I first downloaded an online library for the MPU-6050 that works with the Arduino IDE I was using to flash the ESP32. It took a few attempts to get the MSP-6050 to connect - as this was my first time importing a community made library, and as I wasn't fully sure how to connect to the MSP-6050, but eventually I was able to get it to connect after looking on different forums and trying three separate libraries. I tested the functionality of the MPU-6050 by creating a script that initialised connection to the MPU-6050 and print it's current accelerometer status to serial line '115200'.
<br><br>
The MPU-6050 has two separate tools for measurement. The accelerometer (measures linear acceleration, i.e., change in velocity) and a Gyroscope (Angular velocity, i.e., how fast and in what direction you're rotating). As it turns out, the goal of tracking the user's posture is relatively simple and didnt require the use of the gyroscrope as the accelerometer by itself was enough. To be more specific, the printed values indicate that the accelerometer's 'Z' axis was able to accurately measure what direction the MPU-6050 was facing when roughly placed against my neck. 
<br><br>
<b>MSP-6050 Printed Values</b>:
<br>
<img src="./images/MSP-6050 values.png" alt="MSP-6050 Values" width="600">
<br>
The values printed range from -17000 through to 17000, and to conclude what value's would best represent good posture, I wrote a script that host's a web server on the ESP32 using the 'WebServer.h' library. I chose to do this as I had just finished another assignment which used flask, and I figured it would be a good excuse to use the knowledge I had just built as well as make visual indicators as to what orientation is currently active. After another round of forum reading and research, I constructed a script that uses a mixture of HTML, CSS and JavaScript all flashed onto the ESP32 itself, that prints the live values of the accelerometer's 'Z' axis in the form of a title heading. By roughly placing the sensor on my own neck and looking at the printed values, I was able to conclude that anything above 14500 was ideal for good posture. Afterwards, I made some small adjustments to verify this assumption, which primarily meant that whenever the value of the accelerometer's 'Z' axis went above this number, the page background color would turn green, otherwise it would turn red. After flashing and testing this improved script - that value of above 14500 seemed to be a sweet spot for good posture. This script is included in the GitHub repository under the name "MSP-6050 Web Client for Debugging.c".
<br><br>
<b>MSP-6050 Web Client</b>:
<br>
<img src="./images/MPU-6050 Web Client Positive.png" alt="MSP-6050 Positive Page" width="600">
<br>
<img src="./images/MPU-6050 Web Client Negative.png" alt="MSP-6050 Negative Page" width="600">

## 4.3 LiPo Battery Configuration
I decided to purchase a 600mHAh battery with a voltage delivery of approximately 3.7V - 4.2V when charged. This only cost me $10 off of Amazon. Because the power requirements of this solution are so low, and the fact it's just a prototype - means that any LiPo battery with more capacity would have cost significantly more money, been physically larger and potentially harder to mount to the user comfortable. It also presented a very insignificant difference in overall usability. 
<br><br>
<b>LiPo Battery:</b>
<br>
<img src="./images/LiPo Battery.jpg" alt="LiPo Battery" width="600">

The LiPo battery itself as it turned out presented several disctinct challanges for this project. The more pressing issue when trying to operate the ESP32 was the fact that if I ever wanted to charge the battery, I would be required to connect a direct current to the ground and power pins on the battery. A massive fire hazzard. This was not something I aware of when researching the LiPo battery initially. After some research, I concluded that a seperate charging regulating module was required. This module would ensure that the LiPo battery charges at a safe and consistent voltage and reduces the overall chance of the battery exploding if it ever began to swell. The LiPo batterys ground and power cables would be soldered onto the module, in addition to two new ground and power cables that will connect to the ESP32.

Because the LiPo battery I purchased only uses about 3.7 - 4.4V of electricity, it doesn't require a very sophisticated charging regulator. After some research, I was able to pick up the 'TP4056' off of amazon for close to $10 which came in a pack of 10. Despite being good value, this specific module doesn't offer a dedicated voltage regulator that will provide a consistent 5V current. Fortunately the ESP32 module i'm using DOES has a built-in regulator, in addition to the lower requirements of the 3.3v pin that I am connecting the MPU-6050 and vibration module to.

### Soldering
The first step for soldering the LiPo battery to the TP4056 charge connecter is to figure out what to do about the connector at the end of the LiPo Battery.
<br><br>
<b>JST-PH 2.0 Connector Close Up:</b>
<br>
<img src="./images/JST-PH 2.0 connector.jpeg" alt="JST-PH 2.0 Connector Close Up" width="300">

I knew I had to solder the wire's directly to the TP4056, but I wasn't sure if I needed to take off the connector without cutting the cables - and at one point I tried to pull it off entirely. It took at least 30 minutes for me to realise I was just able to use tweezers to cut the wires.

Afterwards, I took 2 of the pin cables that came with my Micro:Bit bundle as part of last semesters DES221, and trimmed the tops using the same set of tweezers and soldered the exposed ends onto the TP4056. This attempt took at least an hour due to solder metal drtipping off the cables - and having the solder metal leak onto the other pins which could have caused a short circuit if not removed.
<br><br>
<b>Soldered LiPo Battery:</b>
<br>
<img src="./images/Soldered LiPo Battery.jpg" alt="Soldered LiPo Battery" width="600">

## 4.4 Short Circuit Disaster
After getting the LiPo battery soldered onto the TP-4056, I went to test it with the live web demo I've discussed previously for the MSP-6050. I connected both the LiPo power out and MPU-6050 power out to the 3.3v pin on the ESP32. You may have noticed the error straight away, but doing this completely fried my MPU-6050. So much so, to the point where the solder points on the MPU-6050 physically burnt my finger.

Despite the model of ESP32 i'm using having a built-in voltage regulator (ESP32 Wroom 32D), hooking up the LiPo battery directly to the 3v pin exposed the MPU-6050 directly to the batterys raw voltage. Fortunately, the ESP32 itself was disconnected from the battery before it was fried itself.

Instead, what I should have done was connected the LiPo power cable to the 5v pin on the other side of the ESP32, where it then would have been regulated and delivered to the MPU-6050. Because of this error, I will need to purchase another MPU-6050 as I only purchased the one when I ordered it. Since I need it ASAP because of the approaching deadline - it's going to cost $20 for a replacement one.

The Diagram below show's the error I made and the pins I should have connected to instead.
<br><br>
<b>Diagram Depicting Short Circuit:</b>
<br>
<img src="./images/Short Circut Illustration.jpg" alt="Short Circuit Illustration" width="600">

## 4.5 Aftermath and Vibration Module
Since the MSP-6050 has been fried, I am at this stage 'technically' unable to create a prototype. However, thankfully I did work on the inplementation and code for the MSP-6050 using DC from my computer and therefore can still modify that code to work with these extra additions.

While I wait for a replacement 6050 to arrive, I'll spend this time getting the other elements working in the meantime.

The final component of this project to be discussed is the vibration module. As and discussed previously, a series of cylindrical vibration modules will be used and strapped to the user's back to alert them of their posture levels. The exact number will varry depending on the intensity of the individual modules.

I purchased a pack of 4 vibration modules that need to be individually soldered onto different cables. I did the soldering with the exact same setup used to solder the LiPo battery, and aside from challanges getting the solder to stick the two separate wires, it went a lot faster then the soldering for the LiPo battery.
<br><br>
<b>Soldered Vibration Module:</b>
<br>
<img src="./images/Soldered Vibration Module.jpg" alt="Soldered Vibration Module" width="600">

The code for this vibration module was extreamly simple. All I had to do was toggle a specific pin on and off and have the power for the vibration module match the pin in the code. After creating a sample script that powers the motor for 3 seconds, then pauses - I have concluded that the strength of a single motor is more then enough to alert the user. 

My plan at this stage, is modify the MPU-6050 web script so that when the user's posture level is below the determined value of 14500, the vibration module will be actived alerting the user of pronotation.

# 5 Prototype Creation

## 5.1 Foundation Planning
At this stage, I have all the core aspects of the prototype functioning independently. All that's left now, is to combine these individual segemnts into a single prototype. The original intention is to create a prototype that combines all these aspects together. 

The original intention was to create a proper frame around each component and attach that to the user's waist with some kind of adhesive. Now at this stage, it's unlikely I'll be able to achieve that frame because of the added complication of the MPU-6050 frying and the approaching deadline for this task. Instead, I'll most likely use some form of tape to stick the components directly to the band.

At this stage, I'm going to focus on the band itself that wraps around the user. The band was always intended to be some kind of elastic band that goes around the user, with some form of clip that ties it neatly around the user. Since I am now aware of the individual charectaristics of these components, I am now better able to orchestrate a design that suit's this project without the guesswork that came with the original design sketeches.

The following sketch describes the approximate sizing, and component placement based on the soldering, and accessibility to other components. The following design also portrays the likely placement of the wires that correspond with each component and their connections.
<br><br>
<b>Altered Final Prototype Design:</b>
<br>
<img src="./images/Final Design.jpg" alt="Final Design" width="600">

## 5.2 MSP-6050 Replacement and Soldering
The new MSP-6050 arrived earlier then expected. I broke the MSP-6050 on a Saturday, and the replacements were projected to arrive by Tuesday. They arrived Monday. This gave me some time to play with both of these sensors and ensure that they are both working - as well as double check the ESP32 still functions.

Before I can use them on the ESP32 - I need to solder these new ones like I did with the original MSP-6050 that I broke. Thankfully, since I knew what I was doing this time around - it took about 1/4 of the time to solder these two new MSP-6050s then it took for the single MSP-6050 last time.

With the MSP-6050's soldered, I crossed my fingers and connected them to my ESP32 and found that it was working! I tested both of them to be sure, and thankfully they were both operational. To ensure that I don't lose the second MSP-6050, I decided to stick it onto the breadboard in the corner.

## 5.3 ESP32 Code
With the MSP-6050 soldered together and functioning, I can finally begin the finishing touches of filtering out noise from the accelerometer, and actually activating the vibration module when the user's posture is beyond defined scope.

From the code created during the ESP32 webpage testing - I stripped away all of the website server related code since I now have the physical vibration module. Additionally, since the vibration module is really simple to trigger in code (only requiring a single pin to trigger), I programmed the pin connected to the vibration module to activate during the conditional check on whether the MSP-6050 is within it's defined thereshold. This worked, however as I feared internally, the vibration module was really sensitive to activation and often triggered for short bursts when the MSP-6050 was well within it's defined threshold. I had a couple of idea's on how I was going to handle this.

My plan initially was to use a dedicated smoothing algorithm that would smooth out the data collected from the accelerometer. However, while I was analysing the data being printed by the MSP-6050's accelerometer, I noticed that were was only ever one or two 'outlier' readings that triggerd the vibration on a false positive out of every 30 prints or so. From this, I had the idea of collecting these values, and calcuating the average value and making the vibration module react to that. In my head, this was a more ideal solution because it would encourage me to figure this out by myself - rather than just incorporating an algorithm that's been fine tuned for such instruments. My plan was to add every value read by the acceleromer, and add those to a list. From there, I was going to determine an interval to check the contents of this list and calculate the average. This was really simple on paper and would have taken me 5 minutes to inplement on python or another higher-level language. However, since the ESP32 using the arduino development environment - it uses the C programming language. 

As it turns out, C does not have a 'List' parameter like higher-level languages do. I needed lists specifically because the contents needed to be dynamic as it was impossible to fully predict how many readings the MSP-6050 will provide. Because of this, the conventional storage datatype for C 'arrays' wouldn't have worked because they need to be assigned a length at creation. After some research, I found that in order to incorporate list functionality, I would have to manually inplement a concept called 'Linked Lists'. Linked Lists are actually really cool. They take advantage of pointers found in 'C' to effectively chain together a series of values in a defined order. According to Jacob Sorber (2019), Each node (or list entry as it's called) has the data for the value itself, and the data for a pointer for the next node in the chain. Because this takes advantage of pointers, even if a new node is inserted into the middle of the chain all that needs to be modified are the pointers in the two surrounding nodes. This means that the value stored doesn't have to be changed in memory which saves both time and resources. The diagram below is a rough example of the chain like structure that connects the nodes together.
<br><br>
<b>Linked List Chain Diagram:</b>
<br>
<img src="./images/Linked Lists Diagram.jpg" alt="Linked Lists" width="600">

From here, it was as simple as looping through all the nodes starting at the head whenever a certain amount of time has passed. Now in order to actually determine how much time has passed in code - I began a search down a massive rabbit hole looking into different libraries to import for time management in C and to make sure that it's consistent with real work time. Fortunantly, I discovered fairly quickly that there was a built-in 'Millis' function that gave the current time in millimeters since january 1st 1970 which I could subtract from a previously stored value of millis to determine the time passed in milliseconds. From here, it was as simple checking if that subtracted value exceeded a set interval and begin the check from there.

Aside from slight syntax errors, it suprisingly worked on my first attempt flashing it to the ESP32. I originally set it to be every seconds (1000 milliseconds) but I found that to be too slow to refresh, so I settled on half a seonc (500 milliseconds). Because of the code finging the average of the MSP-6050 values in a set interval of time, it was able to effectively ignore outliers - which felt really good to get working.

The final code in this project can be found in "Posture_Tracker_Finished_Code.c".

## 5.4 Physical Prototype Creation

### 5.4.1 Materials

With the code operational, all that's left is to actually begin construction on the physical prototype. Before the MSP-6050 was fried, I had already collected the material's I would need for this project. Previously, I have discussed different material's that could work well for this prototype. Looking back at that, I definently over-estimated the quality of material's I would need - as I realised that having 3D printed chases over every single components is absoloutly not nessesary for this prototype, for example. With that in mind - I opted for more simple materials, such as a simple elastic resistance band that goes across the user's waist, velcro strips to attach the two sides together, and magnets to hold the MSP-6050 to the user's neck.
<br><br>
<b>Elastic Resistance Band:</b>
<br>
<img src="./images/Elastic Resistance Band.jpg" alt="Elastic Resistance Band" width="600">
<br><br>
<b>Velcro:</b>
<br>
<img src="./images/Velcro Box.jpg" alt="Velcro" width="600">
<br><br>
<b>Magnets:</b>
<br>
<img src="./images/Magnet Box.jpg" alt="Magnets" width="600">

### 5.4.2 Construction

Using these materials, I started construction based on the final sketched design. The first thing I did was apply the velcro to either side of the resistance band to ensure it can be closed. I wasn't sure if I was going to be able to take off the velcro strips without destroying the resistance band if a mistake was made. My fear was that if I attached the breadboard and the velcro was then misplaced it would cause damage to the resistance band trying to remove the velcro. Therefore, leaving the breadboard stuck on a broken band. Fortunantly, I was able to apply the velcro without any issues. 
<br><br>
<b>Velcro Attached:</b>
<br>
<img src="./images/Velcro Closeup.jpg" alt="Velcro Attached" width="600">

The breadboard I used for testing had an adhesive I could peel off and apply - so I attached that to the center of the resistance band.
<br><br>
<b>Breadboard Closeup:</b>
<br>
<img src="./images/Breadboard Closeup.jpg" alt="Breadboard Closeup" width="600">

Afterwards, I applied the vibration module and battery onto the resistance band on either side of the breadboard - using tape to stick them in place. I didnt want to use any permanent solution like glue - in case a component had an issue. I have learnt my lesson from the MSP-6050. 
<br><br>
<b>Vibration Module Closeup:</b>
<br>
<img src="./images/Vibration Module Closeup.jpg" alt="Vibration Module Closeup" width="600">
<br><br>
<b>Battery Closeup:</b>
<br>
<img src="./images/Battery Closeup.jpg" alt="Battery Closeup" width="600">

With all the components physically attached to the resistance band, I needed to determine how to anchor the MSP-6050 to the user's neck. In the prototype sketches I made, I didn't think too much about the material used to connect the magnets and the MSP-6050. I considered using a cut elastic band to connect the MSP-6050 and the magnets, but decided against it as I had trouble getting the rubber band to stick to the MSP-6050. I ultimately decided to use string I had lying around to save me needing to do more shopping. I simply tied the string around the cables connecting into the pins on the MSP-6050, and then attached magnets on either side. 
<br><br>
<b>MSP-6050 Magnet Attachments:</b>
<br>
<img src="./images/Prototype MSP-6050 Prototype Magent Attachments.jpg" alt="MSP-6050 Magnet Attachments" width="600">

With this, the physical construction was effectively complete. All I have left to do is physically test the device and ensure that it functions as indended.

## 5.5 Testing

When I began testing for this prototype, I realised straight away just how difficult it is to put this on by myself. There are two elements that I didn't take into account when designing this prototype, and that was toggling the prototype on and off, and comfortably anchoring the MSP-6050 to my neck using magnets. To assist me in testing, I used my sister to both manage the power while i'm wearing it, and more importantly assist me in anchoring the magnets to my body. For the first few tests, I opted to have power through USB while sitting down, so I can better configure the MSP-6050 values. 

It was during this testing, that I realised that the duel magnet mount solution I came up with was really impracticle. When I came up with the design I failed to account for the fact that my shirt will sage, and contort. This means that with the duel anchor setup, the MSP-6050 is rarely, if ever pinned against my back. This means that the readings gathered are unreliable. In addition, the sketch I provided had the magnets resting on the shirts collar above the MSP-6050. Placing the magnets in that spot causes the shirt to sage and contort even further. The work-around I found for the magnet sagging on the shirt collar specifically was to place the magnets closer to my shoulder blades - to ensure that the weight distribution was more spread out. Even then, it still didn't pin the MSP-6050 to my neck.
<br><br>
<b>MSP-6050 On Back (This image was taken with someone holding one side of the magnet so it appears straight):</b>
<br>
<img src="./images/Prototype MSP-6050 Closeup.jpg" alt="MSP-6050 On Back" width="600">
<br><br>
<b>Magnets on Shoulder:</b>
<br>
<img src="./images/Prototype Magnet Closeup.jpg" alt="Magnets on Shoulder" width="600">
<br><br>
<b>Full Body Image:</b>
<br>
<img src="./images/Prototype Portrait on User.jpg" alt="Full Body Image" width="600">

I wasnt sure what to do here. I didnt want to go out and buy any more materials since I had already spent close to $70 AUD on this project. I ultimately just decided to call it quits for the night, and try again the next day. I knew I wanted the magnets to be used to mount the MSP-6050. It made the most sense, because I need to be able to adjust the fit dynamically, and it's also the main option used for mounting on a couple of the simular solutions discussed previously. I originally avoided having the magnet attached to the MSP-6050 module itself because of fear that it would interfere with it's readings, but I was getting desperate. I used bluetack to attach a magnet onto the MSP-6050, and with the prototype spread across my desk - I tested the readings on the MSP-6050 with the magnets attached. To my suprise, it read it just fine. I concluded that only the gyroscope was affected by the magnets, but since I wasn't using those for this project anyways it didn't end up affecting the solution. 

With this knowledge in mind, I got my sister to help me put on my prototype and attach the MSP-6050 directly to my neck. This time it was perfect. The magnets pinned the MSP-6050 perfectly straight for accurate readings. With the MSP-6050 now responding more accurately to my posture. Unfortunantely, I've noticed that the use of tape and the material of the resistance band makes the vibration module not feel as intnese as I expected. You can still feel it (and hear it), but it's not as <b>impactful</b> as I had in mind.

With it now working - I tested the prototype to find that the value of above 14500 was way too high. After some more trial and error with the code, I found the value of anything above 10100 worked really well. Additionally, the prototype also works under the shirt as well as I originally intended.

With the prototype functioning with me, I needed to make sure that other people can use this prototype and have it function in the same way. For this, I got two of my family members to try on the prototype.
<br><br>
<b>Test Subject 1:</b>
<br>
<img src="./images/Prototype Test Subect 1.jpg" alt="Test Subject 1" width="600">
<br><br>
<b>Test Subject 2:</b>
<br>
<img src="./images/Prototype Test Subect 2.jpg" alt="Test Subject 2" width="600">

It worked really well. The value of 10100 was indeed a good sweet spot that worked for a broader audience. 

Finally, with the prototype fully functional, I got my test subjects to walk around my home with the LiPo battery powering the prototype (ensuring I connected the LiPo battery to the 5v pin this time) and it worked without any major issues. I used this opportunity during testing to film some segments for the video proposal as well. 

The proposal briefly summarises the use case of the posture tracker, who it's used for, and why it exists. 

## 6 Conclusion and Final Thoughts
This project has easily been the most fun I have ever had working on any academic assignment. This assignment for me was the perfect blend of engagement, challenge and practical application. Especially compared to DES221, where I wasn't able to participate as much to the group project due to communciation issues. This project has allowed me to effectively 'redeem' myself. On that same note, I'm glad that I did this project alone and not in a group. Purely because I have been able to maintain creative freedom and solve these challenges on my own.

If I were to redo this task - I would for sure put more emphasis into making a prototype that is more elegant. For example, using a solderable breadboard, making the solution easier to put on by myself, using more tactile materials other then tape, etc. Additionally, the solution I have constructed won't be fantastic for more athletic use cases due to it's fragility and potential noisy data readings. But honestly, other then those small changes, I am still really pleased with how this project has concluded.

Thank you so much for joining me on this journey.

# References
Luis, J., & Rosario, J. (2017). What is Posture? A Review of the Literature in Search of a Definition. https://ecronicon.net/assets/ecor/pdf/ECOR-06-00168.pdf

Jacob Sorber, (2019, July 31). Understanding and implementing a Linked List in C and Java [Video]. YouTube. https://www.youtube.com/watch?v=VOpjAHCee7c