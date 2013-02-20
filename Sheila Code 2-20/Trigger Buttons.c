
void trigger_arm_tilt()
{
	if(joy1Btn(6))
	{
		motor [arm_tilt_motor] = 100;

	}

	else
	{

		motor [arm_tilt_motor] = 0;
	}
	if(joy1Btn(8))
	{
		motor [arm_tilt_motor] = -100;;

	}

	else
	{
		motor [arm_tilt_motor] = 0;
	}


}
