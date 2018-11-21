#ifndef IMAGE_H
#define IMAGE_H

class Image{
	public:
		virtual ~Image(){}
		// 描画関数
		virtual void drawImage(int, int) = 0;
};

#endif
