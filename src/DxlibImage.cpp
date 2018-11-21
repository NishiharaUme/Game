#include "DxlibImage.h"
#include "DxLib.h"

DxlibImage::DxlibImage(char *filename){
	if(filename != nullptr){

		this->graphHandle = LoadGraph(filename);

		if(this->graphHandle == -1){
			this->hasImage = false;
		}

		else{
			this->hasImage = true;
		}

	}
	else{
		// LoadGraphのエラー時の値は-1から
		this->graphHandle = -1;
		this->hasImage = false;
	}
}

void DxlibImage::drawImage(int leftX, int topY){
	if(hasImage && (graphHandle != -1)){
		DrawGraph(leftX, topY, graphHandle, true);
	}
}
