#include "led.h"
#include <stdio.h>


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
	Led Myled;
	Myled.Init();

	while(1){
		Delay(100);
		Myled.StepLeft();
	}
}
