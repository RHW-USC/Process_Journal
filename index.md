# Process Journal
## 1 Introduction

This process journal will be documenting the design and creation of a project for tasks 2 and 3 in DES220. The project itself, will be a responsive, and physical creation that will use a micro controller (Such as, a Raspberry Pi, ESP32, or a Micro:Bit). This assignment has the option to be developed in a group of up to 3 people, however I have decided to develop this solution myself, so that I can challange myself while also having complete creative control.

A fundemental attribute my solution must meet, is that it must be Responsive. Responsive in this context refers to the dynamic reaction of a system that responds to external stimuli. An example of this, is an individual wearing a smart watch with a build in heart monitor. The Input is the user's heart rate, and the response is a graphical display on the users real time heart rate. The solution for this assignment doesnt need to be a wearable device, it can be anything from custom hardware, to environemtnal sensors feeded into a web application. 

## 1.1 Workshop Design Practice

Throughout this course, several key design areas are identified to increase design focus and productivity. These aspects identify the <b>Form</b>, <b>Interaction Configuration</b>, <b>What Input is Being Responded to?</b>, and <b>What kind of output does it respond with?</b>

A provided tool to help develop my brainstorming skills was the 'Responsive Roulette' tool in Week 6's Workshop (https://tgifford-usc.github.io/ResponsiveRoulette/). This tool generates several random answers for the different design aspects mentioned above. I was tasked with creating a 'solution' for this random combination to help me learn to think outside the box. The generated prompts I was given was the following.
<br>

### Generation #1

<b>Form:</b> Mobile App<br>
<b>Interaction Configuration:</b> Multiperson<br>
<b>What Input is being responded to?</b> Location<br>
<b>What kind of output does it respond with?</b> Visual

An idea for this, is an hide and seek mobile application that hiders install to see where the other hiders are hiding, and where the seeker is. Of course, everyone's location would be tracked using the app, and their location would be displayed using a generic map API like google maps, with hiders location marked with a blue pin, and the seeker in red.

### Generation #2

<b>Form:</b> Hybrid<br>
<b>Interaction Configuration:</b> Non-Human<br>
<b>What Input is being responded to?</b> Environmental Sensors<br>
<b>What kind of output does it respond with?</b> Kinetic

This generation is inherently more complex then the last generation. An idea for this generation, is a robot that is programmed to move in a straight line until one of its sensors detects an object in its way. Upon this detection, it will turn to avoid contact. The robot can also transmit its sensor data to a web application so that, (A) the robot can refer to its detection history, and (B) so a human can observe and track its movement.

## 1.2 Potential Ideas for Project

Ideally, the project I develop for this assignment will solve a problem that I personally experience. The solution doesnt need to reinvent the wheel, but it does need to have my own unique twist that makes it unique. The following are potential solutions I have come up with that could be interesting to further develop. 
<br><br>
<b>(1) Smart Home Device</b><br> As I have a smart home setup already established with home assistant, my first thought is to create a smart device that can link into that already established infastructure. However, solution will be complicated to develop and integrate - especially for the shorter time frame for this project. In addition, it poses difficulty actually demonstrating this project in class as there is no infastructure established. Bcause of this, if this solution is pursued it would require a self-contained featureset that exists outside the Home Assistant environment for demonstration purposes, which may be outside of the scope of this project.<br>
<b>(2) Hide and Seek Application</b><br>The Hide and Seek solution brainstormed previously could be a good option, because of its simplier premise. This solution would be self-contained, as it doesnt require any existing infastructure to work - like with the Home Assistant smart device.<br>
<b>(3) Video Responsive RGB Strip</b><br>One of the coolest uses of LED's ive ever seen, is placing a LED strip behind a TV and having the LED's mimic the color on the TV. This project would be undoubedbly be large in scale - especially since comercial releases of this concept can easily exceed $500 AUD. This prospect would require live video analysis of a display which may be more then a micro:bit or ESP32 can handle. More research into this concept in particular is useful, since there are many unknowns that need to be cleared up before a final decision can be made. 
