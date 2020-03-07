#include "led.h"
#include "stepper.h"

Led MyLed;

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
	MyLed.Init();

	while(1){
		Delay(100);
		MyStepper.StepLeft();
	}
}
