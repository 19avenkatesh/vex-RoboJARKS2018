
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





	motor(frontRightWheelMotor) = 127;
	motor(frontLeftWheelMotor) = 127;
	motor(backLeftWheelMotor) = 127;
	motor(backRightWheelMotor) = 127;
	wait1000Msec;

	//move forward from starting positions

	motor(frontRightWheelMotor) = 127;
	motor(frontLeftWheelMotor) = -0;
	motor(backLeftWheelMotor) = -0;
	motor(backRightWheelMotor) = 127;
	wait1000Msec;

	//turn towards flag

	motor(frontRightWheelMotor) = 127;
	motor(frontLeftWheelMotor) = 127;
	motor(backLeftWheelMotor) = 127;
	motor(backRightWheelMotor) = 127;
	wait1000Msec;


	//move forward for 1 second at 127 power towards flag and hit flag




	motor(frontRightWheelMotor) = -127;
	motor(frontLeftWheelMotor) = 127;
	motor(backLeftWheelMotor) = 127;
	motor(backRightWheelMotor) = -127;
	wait2000Msec

	//u turn from facing flags to facing platform


		motor(frontRightWheelMotor) = 127;
	motor(frontLeftWheelMotor) = 127;
	motor(backLeftWheelMotor) = 127;
	motor(backRightWheelMotor) = 127;
	wait2000Msec;

	//going forward toward platform

		motor(frontRightWheelMotor) = 0;
	motor(frontLeftWheelMotor) = 127;
	motor(backLeftWheelMotor) = 127;
	motor(backRightWheelMotor) = 0;
	wait1000Msec;

	//turning towards platform

		motor(frontRightWheelMotor) = 127;
	motor(frontLeftWheelMotor) = 127;
	motor(backLeftWheelMotor) = 127;
	motor(backRightWheelMotor) = 127;
	wait1000Msec;

	//moving forward onto platform



