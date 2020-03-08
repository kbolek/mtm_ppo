#include "led.h"
#include "stepper.h"
#include "keyboard.h"

void Delay(int iTimeInMs){
	volatile int iCycle;
	int iNumberOfCycles = 4615 * iTimeInMs;
	char cCharIncrementation;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {
	 cCharIncrementation++;
	}
}

int main(void)
{
	Stepper MyStepper;
	Keyboard MyKeyboard;
	Led MyLed;
	LedInv MyLedInv;
	
	if(MyKeyboard.eRead() == BUTTON_4){
		MyStepper.SetLed(&MyLedInv);
	}
	else{
		MyStepper.SetLed(&MyLed);
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

