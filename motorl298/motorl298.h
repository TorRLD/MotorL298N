/*
 * Motor Driver Control (L298N)
 * 
 * Author: Heitor Lemos
 * Setembro de 2022
 * 
 */


#ifndef motorl298_n
#define motorl298_n

#include "Arduino.h"

class motor
{
  public:
    /*   IN1 -> pin always HIGH; IN2 -> pin always LOW; pwm -> pin PWM */
    motor(int in1, int in2, int pwm);
    void racer(int vel);
  private:
    int _in1;
    int _in2;
    int _pwm;
    
    
};

#endif
