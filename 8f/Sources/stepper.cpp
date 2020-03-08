#include "stepper.h"
#include "led.h"

void Stepper::SetLed(Led *LedFunction){
	Stepper::pMyLed = LedFunction;
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		Stepper::ucLedCtr--;
		Stepper::ucLedCtr = Stepper::ucLedCtr % 4;
			Stepper::pMyLed->On(Stepper::ucLedCtr);		
	}
	else if(eStep == RIGHT){
		Stepper::ucLedCtr++;
		Stepper::ucLedCtr = Stepper::ucLedCtr % 4;
		Stepper::pMyLed->On(Stepper::ucLedCtr);
	}
}

void Stepper::StepLeft(){
	Stepper::Step(LEFT);
}

void Stepper::StepRight(){
	Stepper::Step(RIGHT);
}
