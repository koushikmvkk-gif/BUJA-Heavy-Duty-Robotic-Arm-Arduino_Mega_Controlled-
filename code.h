#include <Servo.h>

// Create servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

// Potentiometer pins
int potPins[] = {A0, A1, A2, A3, A4, A5};

// Servo objects array
Servo servos[] = {servo1, servo2, servo3, servo4, servo5, servo6};

void setup() {
  // Attach servo pins
  servos[0].attach(3);
  servos[1].attach(5);
  servos[2].attach(6);
  servos[3].attach(9);
  servos[4].attach(10);
  servos[5].attach(11);
}

void loop() {
  for(int i=0; i<6; i++){
    int potValue = analogRead(potPins[i]);      // Read potentiometer (0-1023)
    int angle = map(potValue, 0, 1023, 0, 180); // Map to servo angle
    servos[i].write(angle);                     // Move servo
  }
  delay(15); // small delay for smooth motion
}
