void arm_extension()
{
        int extensionPower = 0;

	if(joy2Btn(BTN_EXTENSION_UP))
	{
		extensionPower = POWER_EXTENSION_UP;
	}

	if(joy2Btn(BTN_EXTENSION_DOWN))
	{
		extensionPower = POWER_EXTENSION_DOWN;
	}

	motor [arm_extension_motor] = extensionPower;
}
