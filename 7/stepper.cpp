#include "stepper.h"

enum Step{LEFT,RIGHT};

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		Stepper::LedCtr++;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		MyLed.On(Stepper::LedCtr);
	}
	else if(eStep == RIGHT){
		Stepper::LedCtr--;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		MyLed.On(Stepper::LedCtr);
	}else{
	}
}

void Stepper::StepLeft(void){
	Stepper::Step(LEFT);
}

void Stepper::StepRight(void){
	Stepper::Step(RIGHT);
}

Stepper::Stepper(unsigned char ucLedInitPosition){
	MyLed.On(ucLedInitPosition);
	Stepper::LedCtr = ucLedInitPosition;
}
