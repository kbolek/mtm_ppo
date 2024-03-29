#include "stepper.h"

extern unsigned char ucInversion;

enum Step{LEFT,RIGHT};

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr++;
		LedCtr = LedCtr % 4;
	}
	
	else if(eStep == RIGHT){
		LedCtr--;
		Stepper::LedCtr = LedCtr % 4;
	}
	
	if(ucInversion == 0){
			MyLed.On(LedCtr);
		}
	else if(ucInversion == 1){
			MyLedInv.On(LedCtr);
		}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}

void Stepper::SetMode(unsigned char ucSetMode){
	ucInversion = ucSetMode;	
}

