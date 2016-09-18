#include "Arduino.h"

class Ultrasonic {
   public:
    Ultrasonic(int pin);
    void DistanceMeasure(void);
    long microsecondsToCentimeters(void);
    long microsecondsToInches(void);
  private:
    int _pin;
    long duration;
};
