#include "Driver.h"

Driver::Driver(DcMotor& m1, DcMotor& m2) {
  _m1 = m1;
  _m2 = m2;  
}

void Driver::forward(int speed) {
  _speed = speed;
  _m1_forward = true;
  _m2_forward = true;
  _m1.move(speed, _m1_forward);
  _m2.move(speed, _m2_forward);
}

void Driver::reverse(int speed) {
  _speed = speed;
  _m1_forward = !_m1_forward;
  _m2_forward = !_m2_forward;
  _m1.move(speed, _m1_forward);
  _m2.move(speed, _m2_forward);
}

void Driver::turnRight() {
  _m1.move(_speed, _m1_forward);
  _m2.move(_speed/2, _m2_forward);
}

void Driver::turnLeft() {
  _m1.move(_speed/2, _m1_forward);
  _m2.move(_speed, _m2_forward);
}

void Driver::stop() {
  _m1.stop();
  _m2.stop();
}
