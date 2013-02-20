void arm_tilt(){
	if(SensorValue(top_limit) == 1)
	{
		if(joy2Btn(8))
		{

			motor[arm_tilt_motor] = -100;

		}

		if(joy2Btn(6))
		{
			motor[arm_tilt_motor] = 0;
		}

	}
	if(SensorValue(bottom_limit) == 1)    // While the Touch Sensor is active (pressed):
	{
		if(joy2Btn(6))
		{
			motor[arm_tilt_motor] = 100;
		}
		if(joy2Btn(8))
		{
			motor[arm_tilt_motor] = 0;
		}

	}
	if(SensorValue(bottom_limit)== 0 && SensorValue(top_limit) == 0)
	{
		if(joy2Btn(6))
		{
			motor [arm_tilt_motor] = 100;

		}

		else
		{
			motor [arm_tilt_motor] = 0;

		}
		if(joy2Btn(8))
		{
			motor [arm_tilt_motor] = -100;

		}
		else
		{
			motor [arm_tilt_motor] = 0;

		}




	}
}
