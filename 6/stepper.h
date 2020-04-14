#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"

class Stepper: public Led{
	private:
		unsigned char LedCtr;
		void Step(enum Step);
	public:
		Stepper(unsigned char = 0);
		void StepLeft(void);
		void StepRight(void);	
};
#endif
