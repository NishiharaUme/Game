#ifndef MOVE_C_OBJ_H
#define MOVE_C_OBJ_H

#include "CollideObj.h"

class FloorCObj;

class MoveCObj : public CollideObj{
	private:
		// 矩形を動かしたい方向へ動かす際に、対角にとった点を全て更新する内部用関数
		// このとき床の存在などを考慮した修正は行わない
		void moveToXY(double, double);
		// 指定された床の表面に, MoveCObjの下部中心を強制的に移動させる内部用関数
		void setFloorSurface(FloorCObj *);
		// 指定された壁の表面に強制的に移動させる内部用関数
		void setWallWithRightCollisionSurface(FloorCObj *);
		void setWallWithLeftCollisionSurface(FloorCObj *);
		// 特定の座標においてMoveCObjの下部が、床より上か下か判定する内部用関数
		// 設置状態は上と判定される
		bool isUpperSideOfFloor(double, double, FloorCObj *);
	protected:
		double leftX;
		double rightX;
		double topY;
		double bottomY;
		double preLeftX;
		double preTopY;

	public:
		MoveCObj();
		~MoveCObj();
		void setLeftTopXY(double, double);
		bool isOnWall();
		bool isOnWallWithRightCollision();
		bool isOnWallWithLeftCollision();
		bool isOnCeiling();

		virtual double getLeftX();
		virtual double getTopY();
		virtual double getRightX();
		virtual double getBottomY();
		virtual void activate(double, double, double, double);
		virtual void setInactive();
		virtual void interact(CollideObj *);
};

#endif
