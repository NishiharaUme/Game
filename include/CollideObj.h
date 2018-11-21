#ifndef COLLIDE_OBJ_H
#define COLLIDE_OBJ_H

class CollideObj{
	protected:
		bool active;

	public:
		CollideObj();
		virtual ~CollideObj();
		virtual double getLeftX() = 0;
		virtual double getTopY() = 0;
		virtual double getRightX() = 0;
		virtual double getBottomY() = 0;
		virtual bool isActive();
		virtual void activate(double, double, double, double) = 0;
		virtual void setInactive() = 0;
		virtual void interact(CollideObj *) = 0;
};

#endif
