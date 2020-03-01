#ifndef LED_H
#define LED_H

class Led {
	public:
		void Init();
		void StepLeft();
		void StepRight();
	private:
		unsigned char ucLedCtr;
		void Step(enum Step);
		void On(unsigned char);
	
};
#endif
