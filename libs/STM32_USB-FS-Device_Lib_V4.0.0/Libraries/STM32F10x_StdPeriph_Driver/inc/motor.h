#pragma once
#ifndef MOTOR_H_
#define MOTOR_H_


#define MOTOR1 TIM3->CCR2
#define MOTOR2 TIM3->CCR1

#define MOTOR_MAX 27360
#define MOTOR_MIN 10080

void motor_PWM_Init(unsigned short arr, unsigned short psc);  //72MHz / (arr + 1)*(psc + 1)

#endif
