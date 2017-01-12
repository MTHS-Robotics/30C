This is the code for Team 30C

#pragma config(Motor,  port2,           RightMotor,    tmotorVex393, openLoop)
#pragma config(Motor,  port3,           LeftMotor,     tmotorVex393, openLoop)
#pragma config(Motor,  port4,           MiddleMotor,   tmotorVex393, openLoop)
#pragma config(Motor,  port5,           LeftTower1,    tmotorVex393, openLoop)
#pragma config(Motor,  port6,           LeftTower2,    tmotorVex393, openLoop)
#pragma config(Motor,  port7,           RightTower1,   tmotorVex393, openLoop)
#pragma config(Motor,  port8,           RightTower2,   tmotorVex393, openLoop)
#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"

void pre_auton() {
bStopTasksBetweenModes = true;
}

task autonomous() {
}

task usercontrol()
{

while (true) {
motor[RightMotor] = vexRT[Ch2];
    motor[LeftMotor]  = vexRT[Ch3];

    if(vexRT[Btn6U] == 1 && vexRT[Btn5U] == 0)
{
motor[LeftTower1] = 500;
motor[LeftTower2] = 500;
motor[RightTower1] = 500;
motor[RightTower2] = 500;
}
else if(vexRT[Btn6U] == 0 && vexRT[Btn5U] == 1)
{
motor[LeftTower1] = -500;
motor[LeftTower2] = -500;
motor[RightTower1] = -500;
motor[RightTower2] = -500;
}
else if(vexRT[Btn6U] == 0 && vexRT[Btn5U] == 0)
{
motor[LeftTower1] = 0;
motor[LeftTower2] = 0;
motor[RightTower1] = 0;
motor[RightTower2] = 0;
}
if(vexRT[Btn6D] == 1 && vexRT[Btn5D] == 0) {
motor[MiddleMotor] = 500;
}
else if(vexRT[Btn6D] == 0 && vexRT[Btn5D] == 1) {
motor[MiddleMotor] = -500;
}
else if(vexRT[Btn6D] == 0 && vexRT[Btn5D] == 0) {
motor[MiddleMotor] = 0;
}
}
}
