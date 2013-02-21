


bool DriveThreshCheck( int par1,int thresh)
{
	return (abs(par1)>thresh);
}

void Driver()
{

	int y1 = joystick.joy1_y1;
	int y2 = joystick.joy1_y2;
	if (!DriveThreshCheck(y1,20))
	{
		y1 = 0;


	}
	if (!DriveThreshCheck(y2,20))
	{
		y2 = 0;
	}



	motor[motor_left]= y1;
	motor[motor_right]= y2;
}
