int fixThreshold (int number) {
	if (abs(number) < 20) {
		return 0;
	}
	if (number > 100) {
		return 100;
	}
	if (number < -100) {
		return -100;
	}
	return number;
}



void analog_arm_extension()
{
	int arm_y2 = joystick.joy2_y2;

	arm_y2 = fixThreshold(arm_y2);

	motor[arm_tilt_motor] = arm_y2;
}








//The code below is an example for the servos. However it is not used in the arm


void armturn()
{
	int delta = 2;                        // Create int 'delta' to the be Servo Change Rate.

	while(true)
	{
		servoChangeRate[servo1] = delta;          // Slow the Servo Change Rate down to only 'delta' positions per update.

		if(ServoValue[servo1] < 128)              // If servo1 is closer to 0 (than 255):
		{
			while(ServoValue[servo1] < 255)               // While the ServoValue of servo1 is less than 255:
			{
				servo[servo1] = 255;                              // Move servo1 to position to 255.
			}
		}

		wait1Msec(1000);                          // Wait 1 second.

		if(ServoValue[servo1] >= 128)             // If servo1 is closer to 255 (than 0):
		{
			while(ServoValue[servo1] > 0)                 // While the ServoValue of servo1 is greater than 0:
			{
				servo[servo1] = 0;                                // Move servo1 to position to 0.
			}
		}

		wait1Msec(1000);                          // Wait 1 second.
	}
}
