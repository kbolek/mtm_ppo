#include "stepper.h"

enum Step{LEFT,RIGHT};

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr++;
		LedCtr = LedCtr % 4;
	}
	else if(eStep == RIGHT){
		LedCtr--;
		LedCtr = LedCtr % 4;	
	}
	
	MyLed.On(Stepper::LedCtr);
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}

Stepper::Stepper(unsigned char ucLedInitPosition){
	MyLed.On(ucLedInitPosition);
	LedCtr = ucLedInitPosition;
}
