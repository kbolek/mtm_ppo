#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
#include "ledinv.h"

class Stepper {
	private:
		Led MyLed;
		unsigned char LedCtr;
		void Step(enum Step);
		unsigned char ucInversion; 
	public:
		LedInv MyLedInv;
		void StepLeft(void);
		void StepRight(void);	
		void SetMode(unsigned char); 
};
#endif
