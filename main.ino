#include "Ultrasonic.h"
#include "Driver.h"

DcMotor m1(7, 30, 31);
DcMotor m2(8, 32, 33);
Driver driver(m1, m2);
Ultrasonic ultrasonic(26);
long distance;

void setup() {
     Serial.begin(9600);
}

void loop() {
  ultrasonic.DistanceMeasure();
  distance = ultrasonic.microsecondsToCentimeters();
  Serial.println("The distance is ");
  Serial.println(" inch");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);
  driver.forward(200);
}
