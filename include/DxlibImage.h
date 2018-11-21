#ifndef DXLIB_IMAGE_H
#define DXLIB_IMAGE_H

#include "Image.h"

class DxlibImage : public Image{
	private:
		int graphHandle;
		bool hasImage;
	public:
		DxlibImage(char *filename);
		virtual void drawImage(int, int);
};

#endif
