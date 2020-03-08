#include "stepper.h"
#include "led.h"

void Stepper::SetMode(unsigned char ucLedMode){
	Stepper::ucInversion = ucLedMode;
}

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
