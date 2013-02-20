void ramp()

{
	int delta = 2;

	while((joy1Btn(1)) && (joy2Btn(1)) && ServoValue[ramp_servo] < 255)

	{
		servoChangeRate[ramp_servo] = delta;
	}
}
