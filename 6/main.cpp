#include "stepper.h"

Stepper MyStepper;

void Delay(int iTimeInMs){
	volatile int iCycle;
	int iNumberOfCycles = 4615 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {
	}
}

int main(void)
{
	
	while(1){
		Delay(500);
		MyStepper.StepLeft();
	}
}
