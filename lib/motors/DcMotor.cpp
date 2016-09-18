#include "DcMotor.h"

DcMotor::DcMotor(void) {}

DcMotor::DcMotor(int speedPin, int ctrlPin1, int ctrlPin2) {
  _speedPin = speedPin;
  _ctrlPin1 = ctrlPin1;
  _ctrlPin2 = ctrlPin2;
}

void DcMotor::move(int speed, boolean high) {
  analogWrite(_speedPin, speed);
  digitalWrite(_ctrlPin1, high);
  digitalWrite(_ctrlPin2, !high);
}

void DcMotor::stop() {
  analogWrite(_speedPin, 0);
  digitalWrite(_ctrlPin1, LOW);
  digitalWrite(_ctrlPin2, LOW);
}
