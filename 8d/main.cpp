#include "stepper.h"
#include "keyboard.h"

void Delay(int iTimeInMs){
	volatile int iCycle;
	int iNumberOfCycles = 4615 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {
	}
}

int main(void)
{
  Keyboard MyKeyboard;
	Stepper MyStepper;
	if(MyKeyboard.eRead() == BUTTON_4){
			MyStepper.SetMode(1); 
		}
	
	while(1){
		Delay(500);
		if(MyKeyboard.eRead() == BUTTON_1){
			MyStepper.StepRight();
		}
		else if(MyKeyboard.eRead() == BUTTON_2){
		  MyStepper.StepLeft();
		}
	}
}
