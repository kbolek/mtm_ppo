#ifndef LED_H
#define LED_H

enum Step{LEFT,RIGHT};

class Led{
	public:
		Led();
	protected:	
		void On(unsigned char);
};


#endif
