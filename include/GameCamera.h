#ifndef GAME_CAMERA_H
#define GAME_CAMERA_H

class Image;

class GameCamera{
	public:
		virtual ~GameCamera(){}
		virtual double getLeftX() = 0;
		virtual double getTopY() = 0;
		virtual void setLeftX(double) = 0;
		virtual void setTopY(double) = 0;
		// ƒJƒƒ‰‚ÌˆÊ’u‚ğŠm’è‚³‚¹‚Ä‚©‚çŒÄ‚Ô
		virtual void setImage(double, double, Image *, int) = 0;
		virtual void draw() = 0;
};

#endif
