<<<<<<< HEAD
<<<<<<< HEAD
#pragma config(Motor,  port2,           frontRightWheelMotor,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           frontLeftWheelMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           backRightWheelMotor,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           backLeftWheelMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           rightScissorMotor,  tmotorVex393_MC29, openLoop)
#pragma config gyt(Motor,  port7,           leftScissorMotor, tmotorVex393_MC29, openLoop)
#define MAX_MOTOR_SPEED 127
#define MIN_MOTOR_SPEED (-127)
=======
=======
>>>>>>> 7fef820fea47a8000a6501cbf3997426075ba708
#pragma config(Motor,  port2,           frontRightWheelMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           frontLeftWheelMotor,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           backRightWheelMotor,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           backLeftWheelMotor,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           rightScissorMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           leftScissorMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           rightClaw,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           leftClaw,             tmotorVex393_MC29, openLoop)

<<<<<<< HEAD
>>>>>>> 7fef820fea47a8000a6501cbf3997426075ba708
=======
>>>>>>> 7fef820fea47a8000a6501cbf3997426075ba708

task main()
{
	while(1==1) {
		motor(frontRightWheelMotor) = vexRT(Ch2);
		motor(frontLeftWheelMoe4wrcccccccccc	tor) = vexRT(Ch1);

		motor[rightScissorMotor] = vexRT(Btn5U)*127+vexRT(Btn5D)*-127;
		motor[leftScissorMotor] = vexRT(Btn5U)*127+vexRT(Btn5D)*-127;
		motor[rightClaw] = vexRT(Btn5U)*64+vexRT(Btn5D)*-64;
		motor[leftClaw] = vexRT(Btn5U)*64+vexRT(Btn5D)*-64;
	}
}
<<<<<<< HEAD
=======

// adi is not reading this
//adi thinks there is no change but he is wrong
//adi has no life
// ADD CLAW DESIGN DECREASE SPEED
<<<<<<< HEAD
>>>>>>> 7fef820fea47a8000a6501cbf3997426075ba708
=======
>>>>>>> 7fef820fea47a8000a6501cbf3997426075ba708
