#pragma config(Motor,  port2,           frontRightWheelMotor,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           frontLeftWheelMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           backRightWheelMotor,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           backLeftWheelMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           rightScissorMotor,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           leftScissorMotor, tmotorVex393_MC29, openLoop)
#define MAX_MOTOR_SPEED 127
#define MIN_MOTOR_SPEED (-127)

task main()
{
	while(true) {
		motor(frontRightWheelMotor) = vexRT(Ch2);
		motor(frontLeftWheelMotor) = vexRT(Ch1);
		motor(backRightWheelMotor) = vexRT(Ch2);
		motor(backLeftWheelMotor) = vexRT(Ch1);

		motor[rightScissorMotor] = vexRT(Btn5U)*127+vexRT(Btn5D)*-127;
		motor[leftScissorMotor] = vexRT(Btn5U)*127+vexRT(Btn5D)*-127;
	}
}

// adi is not reading this
//adi thinks there is no change but he is wrong
