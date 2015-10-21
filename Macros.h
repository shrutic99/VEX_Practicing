int driveY = 0;
int driveX = 0;
int DEADZONE = 15;
int strafeDrive = 0;

void variables()
{
	driveY = vexRT[Ch3];
	driveX = vexRT[Ch4];
	strafeDrive = vexRT[Ch1];
}
