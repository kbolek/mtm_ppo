#include "stepper.h"

extern unsigned char ucInversion;

enum Step{LEFT,RIGHT};

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		Stepper::LedCtr++;
		Stepper::LedCtr = Stepper::LedCtr % 4;
	  Stepper::pMyLed->On(Stepper::LedCtr);
	}
	else if(eStep == RIGHT){
		LedCtr--;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		Stepper::pMyLed->On(Stepper::LedCtr);
}
	}

void Stepper::StepLeft(void){
	Stepper::Step(LEFT);
}

void Stepper::StepRight(void){
	Stepper::Step(RIGHT);
}

void Stepper::SetLed(Led * MyLedObject){
	Stepper::pMyLed = MyLedObject;	
}

