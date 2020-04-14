#include "stepper.h"

extern unsigned char ucInversion;

enum Step{LEFT,RIGHT};

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		Stepper::LedCtr++;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		if(ucInversion == 0){
			MyLed.On(Stepper::LedCtr);
		}
		else if(ucInversion == 1){
			MyLedInv.On(Stepper::LedCtr);
		}
	}
	else if(eStep == RIGHT){
		LedCtr--;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		if(ucInversion == 0){
			MyLed.On(Stepper::LedCtr);
		}
		else if(ucInversion == 1){
			MyLedInv.On(Stepper::LedCtr);
		}
	}else{
	}
}

void Stepper::StepLeft(void){
	Stepper::Step(LEFT);
}

void Stepper::StepRight(void){
	Stepper::Step(RIGHT);
}

