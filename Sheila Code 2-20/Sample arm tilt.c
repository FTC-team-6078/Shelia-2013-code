#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorC,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C2_1,    arm_tilt,             tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  int delta = 2;                        // Create int 'delta' to the be Servo Change Rate.

  while(true)
  {
    servoChangeRate[arm_tilt] = delta;          // Slow the Servo Change Rate down to only 'delta' positions per update.

    if(ServoValue[arm_tilt] < 128)              // If servo1 is closer to 0 (than 255):
    {
      while(ServoValue[arm_tilt] < 255)               // While the ServoValue of servo1 is less than 255:
      {
        servo[arm_tilt] = 255;                              // Move servo1 to position to 255.
      }
    }

    wait1Msec(1000);                          // Wait 1 second.

    if(ServoValue[arm_tilt] >= 128)             // If servo1 is closer to 255 (than 0):
    {
      while(ServoValue[arm_tilt] > 0)                 // While the ServoValue of servo1 is greater than 0:
      {
        servo[arm_tilt] = 0;                                // Move servo1 to position to 0.
      }
    }

    wait1Msec(1000);                          // Wait 1 second.
  }
}
