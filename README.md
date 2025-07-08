# VisionGuard: Smart Stick for the Visually Impaired

## Overview

**VisionGuard** is an affordable, user-friendly smart stick designed to enhance the mobility and safety of visually impaired individuals. By integrating ultrasonic sensors and a beeper-based alert system, the device detects obstacles in multiple directions and provides real-time audio feedback, empowering users to navigate more independently and confidently.

## Motivation

India has nearly 5 million visually impaired people, many of whom lack access to effective and affordable assistive technology. Existing solutions are often expensive or limited in functionality. VisionGuard addresses this gap by offering a cost-effective, robust, and dignified tool that leverages simple yet powerful electronics to improve daily mobility and safety for its users.

## Key Features

- **Multi-Directional Obstacle Detection:**  
  Three ultrasonic sensors scan left, right, and forward directions for obstacles.

- **Real-Time Audio Alerts:**  
  A beeper (buzzer) provides immediate feedback when an obstacle is detected within a safe range.

- **Simple and Reliable:**  
  Uses proven Arduino-compatible components and the NewPing library for stable performance.

- **Affordable and Scalable:**  
  Designed for low-cost assembly and easy adaptation for future enhancements.

## How It Works

1. **Sensing:**  
   Ultrasonic sensors continuously measure distances to potential obstacles in left, right, and forward directions.

2. **Processing:**  
   The Arduino microcontroller evaluates the sensor readings. If any obstacle is detected within the preset safe distance, the beeper is activated.

3. **Alerting:**  
   The beeper emits a clear, audible alert, enabling the user to react promptly and avoid collisions.

## Hardware Components

| Component              | Purpose                                 |
|------------------------|-----------------------------------------|
| Arduino Board          | Main controller                         |
| Ultrasonic Sensors (x3)| Obstacle detection (left, right, front) |
| Buzzer (beeper)        | Audio alert for detected obstacles      |
| Jumper Wires, Stick    | Physical assembly and mounting          |

## Circuit Diagram

- Each ultrasonic sensor connects to a pair of digital pins (Trig and Echo).
- The buzzer connects to a digital output pin.
- All components share common ground and 5V power from the Arduino.

## Code Explanation

The code is structured for clarity, reliability, and ease of understanding:

- **Initialization:**  
  - Sets up sensor pins and the buzzer.
  - Initializes serial communication for debugging.

- **Main Loop:**  
  - Reads distances from all three sensors.
  - If any sensor detects an obstacle closer than the safe threshold, the buzzer is activated.
  - Otherwise, the buzzer remains off.
  - Sensor readings are printed to the serial monitor for monitoring and troubleshooting.

- **Alert Logic:**  
  - The device is always active; no Bluetooth or advanced audio is used in this version for simplicity and reliability.


## Example Usage

- **Power the device** using a portable battery or USB supply.
- **Hold the stick** so that the sensors point forward, left, and right.
- **Move forward:** If an obstacle is detected within 50 cm, the beeper will sound, alerting you to stop or change direction.

## Future Work

- **Advanced Feedback:** Add vibration motors for silent alerts.
- **Bluetooth/Voice Integration:** Enable smartphone connectivity or voice prompts.
- **AI-Based Detection:** Integrate camera and AI for object recognition and scene understanding.
- **Customization:** Adjustable safe distance and alert modes for different environments.

## Acknowledgements

The VisionGuard project draws inspiration from real-world needs and academic research in assistive technology. Special thanks to all contributors and mentors who provided guidance during development.

**Note:** This code and design use a simple beeper (buzzer) for alerts, as per the final implementation. For more advanced audio or Bluetooth features, further hardware and code modifications would be required. This version prioritizes reliability, ease of use, and affordability for the visually impaired community[1][2][3].
