
task main()
{


#pragma config(Motor,  port2,           frontRightWheelMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           frontLeftWheelMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           backRightWheelMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           backLeftWheelMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           rightScissorMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           leftScissorMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           rightClawMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           leftClawMotor, tmotorVex393_MC29, openLoop)





	motor(frontRightWheelMotor) = 127
	motor(frontLeftWheelMotor) = 127
	motor(backLeftWheelMotor) = 127
	motor(backRightWheelMotor) = 127
	wait1000Msec

	motor(frontRightWheelMotor) = 127
	motor(frontLeftWheelMotor) = -0
	motor(backLeftWheelMotor) = -0
	motor(backRightWheelMotor) = 127
	wait1000Msec

	motor(frontRightWheelMotor) = 127
	motor(frontLeftWheelMotor) = 127
	motor(backLeftWheelMotor) = 127
	motor(backRightWheelMotor) = 127
	wait1000Msec


	//move forward for 1 second at 127 power


	motor(rightClawMotor) = 50
	motor(leftClawMotor) = 50
	wait1000Msec

	//move claw up I think for 1 second


	motor(frontRightWheelMotor) = -127
	motor(frontLeftWheelMotor) = 127
	motor(backLeftWheelMotor) = 127
	motor(backRightWheelMotor) = -127
