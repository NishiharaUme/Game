#ifndef GAME_ENTITY_CAMERA_H
#define GAME_ENTITY_CAMERA_H

#include "GameCamera.h"

class Image;

namespace gameEntityCameraNS{
	struct ImageNode{
		int drawLeftX;
		int drawTopY;
		Image *img;
		ImageNode *next;
	};
	 const double EXTRA_SCREEN_WH = 200.0;
}

class GameEntityCamera : public GameCamera{
	private:
		double leftX;
		double topY;
		double width;
		double height;
		// レイヤーの数
		int layerCount;
		// ノード群
		gameEntityCameraNS::ImageNode *nodes;
		// イメージ表示用のノードの数
		int nodeCount;
		// 次にImageを置くノードの番号
		int nodeIndex;
		// レイヤーごとにイメージを保存しておく
		gameEntityCameraNS::ImageNode **heads;
		gameEntityCameraNS::ImageNode **tails;
		
		void pushImageNode(gameEntityCameraNS::ImageNode *, int);
	public:
		GameEntityCamera(double, double, int, int);
		virtual ~GameEntityCamera();
		virtual double getLeftX();
		virtual double getTopY();
		virtual void setLeftX(double);
		virtual void setTopY(double);
		virtual void setImage(double, double, Image *, int);
		virtual void draw();
};

#endif
