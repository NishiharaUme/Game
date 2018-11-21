#include "DxlibTestBoxAndLineImage.h"
#include "DxLib.h"

DxlibTestBoxAndLineImage::DxlibTestBoxAndLineImage(int nextX, int nextY, bool isLine){
	this->nextX = nextX;
	this->nextY = nextY;
	this->isLine = isLine;
}

void DxlibTestBoxAndLineImage::drawImage(int leftX, int topY){
	unsigned int Cr;

	if(isLine){
		// 白色の値を取得
		Cr = GetColor(255, 255, 255);
		
		// 線を描画
		// 終端座標までは描き切られないので、＋１することで書ききらせる
		DrawLine(leftX, topY, leftX + this->nextX + 1, topY + this->nextY + 1, Cr);

	}
	else{
		// 青色の値を取得
		Cr = GetColor(0, 0, 255);
		
		// 四角形を描画
		// 指定された点に描画させるための補正
		DrawBox(leftX, topY, leftX + this->nextX + 1, topY + this->nextY + 1, Cr, true);
	}

	return;
}
