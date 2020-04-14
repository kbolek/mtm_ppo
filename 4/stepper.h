#ifndef STEPPER_H
#define STEPPER_H
class Stepper{
	private:
		unsigned char LedCtr;
		void Step(enum Step);
	public:
		void StepLeft(void);
		void StepRight(void);	
};
#endif
