#include <NewPing.h>

// Pin assignments for ultrasonic sensors
const int trigPinLeft = 2;
const int echoPinLeft = 3;
const int trigPinRight = 6;
const int echoPinRight = 7;
const int trigPinFront = 4;
const int echoPinFront = 5;

// Pin for the beeper (buzzer)
const int buzzerPin = 8;

// Maximum distance (in cm) for the ultrasonic sensors
const int maxDistance = 700;

// Safe distance (in cm) to trigger the alert
const int safeDistance = 50; // Adjust as needed

// Create NewPing objects for each sensor
NewPing sensorLeft(trigPinLeft, echoPinLeft, maxDistance);
NewPing sensorRight(trigPinRight, echoPinRight, maxDistance);
NewPing sensorFront(trigPinFront, echoPinFront, maxDistance);

void setup() {
  pinMode(buzzerPin, OUTPUT);       // Set buzzer as output
  Serial.begin(9600);               // For debugging
}

void loop() {
  delay(50); // Small delay for stability

  // Measure distances from each sensor
  int distanceLeft = sensorLeft.ping_cm();
  int distanceRight = sensorRight.ping_cm();
  int distanceFront = sensorFront.ping_cm();

  // Debug: print distances to serial monitor
  Serial.print("Left: ");
  Serial.print(distanceLeft);
  Serial.print(" cm, Right: ");
  Serial.print(distanceRight);
  Serial.print(" cm, Front: ");
  Serial.print(distanceFront);
  Serial.println(" cm");

  // If any sensor detects an obstacle within the safe distance, activate the buzzer
  if ((distanceLeft > 0 && distanceLeft < safeDistance) ||
      (distanceRight > 0 && distanceRight < safeDistance) ||
      (distanceFront > 0 && distanceFront < safeDistance)) {
    digitalWrite(buzzerPin, HIGH); // Turn on buzzer
  } else {
    digitalWrite(buzzerPin, LOW);  // Turn off buzzer
  }
}
