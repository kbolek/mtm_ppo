#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
#include "ledinv.h"

class Stepper {
	private:
		Led MyLed;
		unsigned char LedCtr;
		void Step(enum Step);
	public:
		LedInv MyLedInv;
		void StepLeft(void);
		void StepRight(void);	
};
#endif
