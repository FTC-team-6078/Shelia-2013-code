void ramp()
{
        int targetPosition;

	if ((joy1Btn(BTN_DEPLOY_RAMP)) && (joy2Btn(BTN_DEPLOY_RAMP)) 
             && ServoValue[ramp_servo] != SERVO_TARGET_POSITION)
	{
		servoChangeRate[ramp_servo] = SERVO_RATE_OF_CHANGE;
		servoTarget[ramp_servo] = SERVO_TARGET_POSITION;
	}
}
