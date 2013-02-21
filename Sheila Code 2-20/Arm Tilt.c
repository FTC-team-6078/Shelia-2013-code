void arm_tilt(){

	int tiltPower = 0;

	if(joy2Btn(BTN_TILT_UP))
	{
		tiltPower = TILT_POWER_UP;
	}
	if(joy2Btn(BTN_TILT_DOWN))
	{
		tiltPower = TILT_POWER_DOWN;
	}

	if(SensorValue(top_limit) == 1 && tiltPower == TILT_POWER_UP)
	{
		tiltPower = 0;
        }
	if(SensorValue(bottom_limit) == 1 && tiltPower == TILT_POWER_DOWN)
	{
		tiltPower = 0;
	}

        motor[arm_tilt_motor] = tiltPower;
}
