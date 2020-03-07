#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"


class Stepper : public Led {
	public:
		Stepper(unsigned char = 0);
		void StepLeft(void);
		void StepRight(void);
	
	private:
		unsigned char ucLedCtr;
		void Step(enum Step eStep);
		
};   

#endif
