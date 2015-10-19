#include "Macros.h"
//below you can create a parameters (int left, int right)and put all the motors you can set parameters to.
//and also you can pacake the stuff so here im naming the motors and setting parameters to them
void updateDriveMotors (left,right)
{
	motor[front_left_drive_motor] = left;
	motor[back_left_drive_motor] = left;
	motor[front_right_drive_motor] = right;
	motor[back_right_drive_motor] = right;
}
//this will make it go back and forth! yay life
//use the void function when you're not making a true or false statemnt or when you're "returning" something
//you can use abs (absolute value)
/*
if (abs(driveY) > DEADZONE)
*/
void drive ()
{
	if (driveY > DEADZONE || driveY < -DEADZONE)
	{
		updateDriveMotors(driveY, driveY);
	}
//now for turning!

	if (driveX > DEADZONE || driveX < -DEADZONE)
	{
		updateDriveMotors (driveX, -driveX);
	}
	else if
	{
		updateDriveMotors (0,0);
	}
}
