#include "Arduino.h"

class DcMotor {
 public:
  DcMotor(void);
  DcMotor(int speedPin, int ctrlPin1, int ctrlPin2);
  void move(int speed, boolean high);
  void stop(void);
 private:
  int _speedPin;
  int _ctrlPin1;
  int _ctrlPin2;
};
