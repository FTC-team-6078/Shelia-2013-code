void arm_extension()
{
	if(joy2Btn(5))
	{
		motor [arm_extension_motor] = 100;

	}

	else
	{
		motor [arm_extension_motor] = 0;

	}
	if(joy2Btn(7))
	{
		motor [arm_extension_motor] = -100;

	}
	else
	{
		motor [arm_extension_motor] = 0;

	}



}
