#ifndef DXLIB_TEST_BOX_AND_LINE_IMAGE_H
#define DXLIB_TEST_BOX_AND_LINE_IMAGE_H

#include "Image.h"

class DxlibTestBoxAndLineImage : public Image{
	private:
		int nextX;
		int nextY;
		// 線分だったらtrue、矩形だったらfalse
		bool isLine;
	public:
		DxlibTestBoxAndLineImage(int, int, bool);
		// 描画関数
		virtual void drawImage(int, int);
};

#endif
