#ifndef FLOOR_C_OBJ_H
#define FLOOR_C_OBJ_H

#include "CollideObj.h"

class FloorCObj : public CollideObj{
	private:
		bool isEqualDouble(double, double);
	protected:
		double startX;
		double startY;
		double endX;
		double endY;
		// 左手座標系 時計回りの方向が正の角度
		double tangent;
		// doubleの等値として扱える誤差
		double coordEPS;
		FloorCObj *nextFloor;
		FloorCObj *preFloor;

	public:
		FloorCObj();
		~FloorCObj();
		bool isFloor();
		// 右側が壁判定になる線分
		bool isWallWithRightCollision();
		// 左側が壁判定になる線分
		bool isWallWithLeftCollision();
		bool isCeiling();
		void setNextFloor(FloorCObj *);
		void setPreFloor(FloorCObj *);
		double getStartX();
		double getStartY();
		double getEndX();
		double getEndY();
		FloorCObj *getNextFloor();
		FloorCObj *getPreFloor();
		// 壁のときは0を返す
		double getTangent();

		virtual double getLeftX();
		virtual double getTopY();
		virtual double getRightX();
		virtual double getBottomY();
		virtual void activate(double, double, double, double);
		virtual void setInactive();
		virtual void interact(CollideObj *);
};

#endif
