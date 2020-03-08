#ifndef LED_H
#define LED_H

enum Step{LEFT,RIGHT};

class Led{
	public:
		Led();
		virtual void On(unsigned char) = 0;
};


#endif
