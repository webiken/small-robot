#include "DcMotor.h"

class Driver {
 public:
  Driver(DcMotor& m1, DcMotor& m2);
  void forward(int speed);
  void reverse(int speed);
  void turnRight(void);
  void turnLeft(void);
  void stop(void);
 private:
  int _speed;
  boolean _m1_forward;
  boolean _m2_forward;
  DcMotor _m1;
  DcMotor _m2;
};
