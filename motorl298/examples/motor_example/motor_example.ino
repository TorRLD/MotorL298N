/*
 * Motor Driver Control (L298N)
 * 
 * Author: Heitor Lemos
 * Setembro de 2022
 * 
 */

/* the motorl298's library is included */
#include <motorl298.h>

//Object
motor motor1(4,5,10);
// 4 -> pin IN1 (always HIGH), 5 -> pin IN2(always LOW) and 10 -> pin PWM

void setup() {
  // put your setup code here, to run once:

}

void loop() {

  //PWM value from 0 to 255
  motor1.racer(100);

}
