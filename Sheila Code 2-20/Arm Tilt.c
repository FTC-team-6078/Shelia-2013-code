void arm_tilt(){

	int tiltPower = 0;

	if(joy2Btn(BTN_TILT_UP))
	{
		tiltPower = POWER_TILT_UP;
	}
	if(joy2Btn(BTN_TILT_DOWN))
	{
		tiltPower = POWER_TILT_DOWN;
	}

	if(SensorValue(top_limit) == 1 && tiltPower == POWER_TILT_UP)
	{
		tiltPower = 0;
        }
	if(SensorValue(bottom_limit) == 1 && tiltPower == POWER_TILT_DOWN)
	{
		tiltPower = 0;
	}

        motor[arm_tilt_motor] = tiltPower;
}
