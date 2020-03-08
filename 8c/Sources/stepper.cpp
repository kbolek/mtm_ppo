#include "stepper.h"
#include "led.h"

extern unsigned char ucInversion;

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		Stepper::ucLedCtr--;
		Stepper::ucLedCtr = Stepper::ucLedCtr % 4;
		if(ucInversion == 1){
			Stepper::MyLedInv.On(Stepper::ucLedCtr);
		} 
		else{
			Stepper::MyLed.On(Stepper::ucLedCtr);
		}
		
	}
	else if(eStep == RIGHT){
		Stepper::ucLedCtr++;
		Stepper::ucLedCtr = Stepper::ucLedCtr % 4;
		if(ucInversion == 1){
			Stepper::MyLedInv.On(Stepper::ucLedCtr);
		} 
		else{
			Stepper::MyLed.On(Stepper::ucLedCtr);
		}
	}
}

void Stepper::StepLeft(){
	Stepper::Step(LEFT);
}

void Stepper::StepRight(){
	Stepper::Step(RIGHT);
}
