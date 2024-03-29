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
	pMyLed->On(LedCtr);
	}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}

void Stepper::SetLed(Led * MyLedObject){
	pMyLed = MyLedObject;	
}

