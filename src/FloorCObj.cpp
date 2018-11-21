#include "FloorCObj.h"

FloorCObj::FloorCObj(){
	this->startX = 0;
	this->startY = 0;
	this->endX = 0;
	this->endY = 0;
	this->tangent = 0;
	this->coordEPS = 0.01;
	this->active = false;
	this->nextFloor = nullptr;
	this->preFloor = nullptr;
}

FloorCObj::~FloorCObj(){

}

bool FloorCObj::isFloor(){
	if(this->endX < this->startX){
		return true;
	}
	return false;
}

bool FloorCObj::isEqualDouble(double num1, double num2){
	const double deltaX = num1 - num2;
	if(((-1) * this->coordEPS < deltaX) && (deltaX < this->coordEPS)){
		return true;
	}
	return false;
}

bool FloorCObj::isWallWithRightCollision(){
	if(this->isEqualDouble(this->startX, this->endX)){
		if(this->endY < this->startY){
			return true;
		}
	}
	return false;
}

bool FloorCObj::isWallWithLeftCollision(){
	if(this->isEqualDouble(this->startX, this->endX)){
		if(this->startY < this->endY){
			return true;
		}
	}
	return false;
}

bool FloorCObj::isCeiling(){
	if(this->startX < this->endX){
		return true;
	}
	return false;
}

double FloorCObj::getStartX(){
	return this->startX;
}

double FloorCObj::getStartY(){
	return this->startY;
}

double FloorCObj::getEndX(){
	return this->endX;
}

double FloorCObj::getEndY(){
	return this->endY;
}

double FloorCObj::getTangent(){
	return this->tangent;
}

double FloorCObj::getLeftX(){
	if(this->startX < this->endX){
		return this->startX;
	}
	return this->endX;
}

double FloorCObj::getTopY(){
	if(this->startY < this->endY){
		return this->startY;
	}
	return this->endY;
}

double FloorCObj::getRightX(){
	if(this->startX < this->endX){
		return this->endX;
	}
	return this->startX;
}

double FloorCObj::getBottomY(){
	if(this->startY < this->endY){
		return this->endY;
	}
	return this->startY;
}

void FloorCObj::activate(double startX, double endX, double startY, double endY){
	this->startX = startX;
	this->endX = endX;
	this->startY = startY;
	this->endY = endY;

	const double deltaX = endX - startX;
	const double deltaY = endY - startY;
	if(endX != startX){
		this->tangent = deltaY / deltaX;
	}
	this->tangent = 0;
}

void FloorCObj::setInactive(){
	this->startX = 0;
	this->startY = 0;
	this->endX = 0;
	this->endY = 0;
	this->tangent = 0;
	this->coordEPS = 0.01;
	this->active = false;
	this->nextFloor = nullptr;
	this->preFloor = nullptr;
}

void FloorCObj::interact(CollideObj *){
}
