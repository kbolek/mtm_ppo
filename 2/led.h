#ifndef LED_H
#define LED_H

class Led {
	private:
		unsigned char LedCtr;
		void Step(enum Step);
		void On(unsigned char);
	
	public:
		void Init(void);
		void StepLeft(void);
		void StepRight(void);	
};
#endif
