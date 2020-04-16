#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
#include "ledinv.h"

class Stepper {
	private:
		Led MyLed;
		LedInv MyLedInv;
		unsigned char LedCtr;
		void Step(enum Step);
	public:	
		void StepLeft(void);
		void StepRight(void);	
};
#endif
