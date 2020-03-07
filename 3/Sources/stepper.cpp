#include "stepper.h"
#include "led.h"

extern Led MyLed;

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		Stepper::ucLedCtr--;
		Stepper::ucLedCtr = Stepper::ucLedCtr % 4;
		MyLed.On(Stepper::ucLedCtr);
	}
	else if(eStep == RIGHT){
		Stepper::ucLedCtr++;
		Stepper::ucLedCtr = Stepper::ucLedCtr % 4;
		MyLed.On(Stepper::ucLedCtr);
	}else{
	}
}

void Stepper::StepLeft(){
	Stepper::Step(LEFT);
}

void Stepper::StepRight(){
	Stepper::Step(RIGHT);
}
