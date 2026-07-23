# BUJA – Heavy-Duty Multi-DOF Robotic Arm

<p align="center">
  <img src="images/Hero_Image.jpg" width="850" alt="BUJA Robotic Arm">
</p>

<p align="center">
  <strong>A Heavy-Duty Multi-DOF Robotic Arm developed using Arduino Mega for embedded motion control, robotic manipulation, and industrial automation learning.</strong>
</p>

<p align="center">

![Arduino Mega](https://img.shields.io/badge/Controller-Arduino%20Mega-00979D?logo=arduino)
![Embedded C](https://img.shields.io/badge/Language-Embedded%20C-blue)
![Status](https://img.shields.io/badge/Project-Completed-brightgreen)
![Robotics](https://img.shields.io/badge/Domain-Industrial%20Robotics-orange)
![License](https://img.shields.io/badge/License-MIT-yellow)

</p>

---

# Project Overview

BUJA is a **Heavy-Duty Multi-Degree-of-Freedom (Multi-DOF) Robotic Arm** designed and developed to understand the fundamentals of industrial robotic manipulators, embedded control systems, and coordinated servo motion.

The project was built using an **Arduino Mega 2560** and six servo motors to achieve smooth multi-axis movement through manual analog control. Every joint of the robotic arm is independently controlled using potentiometers, allowing real-time manipulation similar to industrial robotic teach pendants.

The primary objective of this project was to gain practical experience in:

- Industrial robotic arm design
- Embedded systems programming
- Motion control
- Mechanical assembly
- Servo synchronization
- Hardware integration

This project provided hands-on exposure to concepts commonly used in industrial automation and robotic manipulation systems.

---

# Project Objectives

- Design a stable heavy-duty robotic arm
- Develop a multi-joint embedded control system
- Implement coordinated servo motor movement
- Understand robotic manipulator fundamentals
- Learn practical industrial automation concepts
- Improve mechanical stability and payload handling

---

# Key Features

- Heavy-duty multi-joint robotic arm
- Six independently controlled servo motors
- Real-time motion control
- Arduino Mega based architecture
- Embedded C implementation
- Smooth PWM servo control
- Modular hardware design
- Simple and reliable operation
- Easy to upgrade for future automation

---

# Hardware Used

| Component | Quantity |
|------------|----------|
| Arduino Mega 2560 | 1 |
| High Torque Servo Motors | 6 |
| Potentiometers | 6 |
| External Power Supply | 1 |
| Mechanical Arm Structure | 1 |
| Connecting Wires | As Required |

---

# Software Used

- Arduino IDE
- Embedded C
- Servo Library

---

# Working Principle

The robotic arm operates using six potentiometers.

Each potentiometer corresponds to one servo motor.

The Arduino Mega continuously performs the following sequence:

1. Reads analog input from the potentiometer.
2. Converts the analog value using the ADC.
3. Maps the input value between 0° and 180°.
4. Generates PWM signals.
5. Rotates the corresponding servo motor.
6. Repeats the process continuously for all six joints.

This allows smooth, responsive, and independent motion of every robotic joint.

---

# Control Architecture

```
Potentiometers
      │
      ▼
Arduino Mega 2560
      │
Analog Input Processing
      │
Angle Mapping
      │
PWM Signal Generation
      │
Servo Motors
      │
Robotic Arm Motion
```

---

# Pin Configuration

| Joint | Servo Pin | Analog Input |
|--------|-----------|--------------|
| Joint 1 | D3 | A0 |
| Joint 2 | D5 | A1 |
| Joint 3 | D6 | A2 |
| Joint 4 | D9 | A3 |
| Joint 5 | D10 | A4 |
| Joint 6 | D11 | A5 |

---

# Software Logic

The program continuously reads six analog inputs.

```cpp
analogRead()
```

↓

Maps sensor values

```cpp
map()
```

↓

Generates servo positions

```cpp
Servo.write()
```

↓

Moves robotic joints

This simple control loop enables real-time operation with minimal latency.

---

# Mechanical Design Highlights

- Multi-link articulated arm
- Stable mechanical frame
- Improved payload support
- Multi-axis movement
- Independent joint operation
- Modular construction for maintenance

---

# Skills Demonstrated

### Robotics

- Industrial Robotics
- Robotic Manipulators
- Motion Control
- Multi-DOF Systems
- Servo Synchronization

### Embedded Systems

- Embedded C Programming
- Arduino Mega Programming
- PWM Signal Generation
- ADC Processing
- Real-Time Embedded Control

### Mechanical

- Mechanical Assembly
- Robotic Structure Design
- Payload Handling
- Joint Integration

### Electrical

- Servo Wiring
- Power Distribution
- Hardware Integration
- Embedded Electronics

---

# Applications

- Industrial Robotics Education
- Pick and Place Systems
- Embedded Systems Learning
- Motion Control Demonstration
- Mechatronics Projects
- Laboratory Automation
- Robotics Research

---

# Repository Structure

```
BUJA-Heavy-Duty-Multi-DOF-Robotic-Arm
│
├── README.md
├── LICENSE
├── firmware/
│     └── Manual_Control.ino
│
├── hardware/
│     ├── Circuit_Diagram.pdf
│     ├── Wiring_Diagram.png
│     └── Pinout.png
│
├── images/
│     ├── Hero_Image.jpg
│     ├── Front_View.jpg
│     ├── Side_View.jpg
│     ├── Working.jpg
│     └── Components.jpg
│
├── docs/
│     ├── Bill_of_Materials.md
│     ├── Working_Principle.md
│     ├── Mechanical_Design.md
│     ├── Electronics_Design.md
│     └── Future_Improvements.md
│
└── videos/
      └── Demo.mp4
```

---

# Future Improvements

Future versions of BUJA can include:

- Wireless Control using ESP32
- Joystick Control
- Bluetooth Interface
- Mobile Application
- Camera-Based Monitoring
- Object Detection
- Automatic Pick and Place
- Inverse Kinematics
- ROS Integration
- Vision-Guided Manipulation

---

# Project Outcomes

Through this project, practical experience was gained in:

- Embedded Systems Programming
- Robotic Motion Control
- Industrial Robotics Fundamentals
- Multi-Joint Manipulator Design
- Servo Motor Coordination
- Mechanical Integration
- Hardware Debugging
- System Testing

---

# Author

## Koushik M

**Mechatronics Engineering Student**

Areas of Interest

- Robotics
- Industrial Robotics
- Embedded Systems
- Industrial Automation
- Motion Control

GitHub:
https://github.com/koushikmvkk-gif

LinkedIn:
https://www.linkedin.com/in/koushik-nair-4556b0291

---

## ⭐ If you found this project interesting, consider giving it a Star.
