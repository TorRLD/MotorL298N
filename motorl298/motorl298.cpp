/*
 * Motor Driver Control (L298N)
 * 
 * Author: Heitor Lemos
 * September, 2022
 * 
 */

#include "Arduino.h"
#include "motorl298.h"

motor::motor(int in1, int in2, int pwm)
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(pwm,OUTPUT);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  _in1 = in1;
  _in2 = in2;
  _pwm = pwm;
  
}
void motor::racer(int vel)
{
  analogWrite(_pwm, vel);
  
}
