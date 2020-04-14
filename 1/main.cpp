#include "led.h"

void Delay(int iTimeInMs){
	volatile int iCycle;
	int iNumberOfCycles = 4615 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {
	
	}
}

int main(void)
{
	LedInit();

	while(1){
		Delay(100);
		LedStepLeft();
	}
}
