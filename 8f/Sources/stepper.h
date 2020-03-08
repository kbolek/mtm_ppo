#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
#include "ledinv.h"

class Stepper {
	public:
		void StepLeft(void);
		void StepRight(void);
		void SetLed(Led *);
	
	private:
		Led *pMyLed;
		unsigned char ucLedCtr;
		void Step(enum Step);

};   

#endif
