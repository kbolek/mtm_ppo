#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
#include "ledinv.h"

class Stepper {
	private:
		Led *pMyLed;
		unsigned char LedCtr;
		void Step(enum Step);
	public:
		void StepLeft(void);
		void StepRight(void);	
		void SetLed(Led *); 
};
#endif
