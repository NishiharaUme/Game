#include "CollideObj.h"

CollideObj::CollideObj(){
	this->active = false;
}

CollideObj::~CollideObj(){

}

bool CollideObj::isActive(){
	return this->active;
}
