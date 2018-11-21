#include "DxlibInput.h"
#include "Dxlib.h"

bool DxlibInput::getOKButtonState(){
	if(CheckHitKey(KEY_INPUT_Z)){
		return true;
	}
	return false;
}

bool DxlibInput::getCancelButtonState(){
	if(CheckHitKey(KEY_INPUT_X)){
		return true;
	}
	return false;
}

bool DxlibInput::getAttack1ButtonState(){
	if(CheckHitKey(KEY_INPUT_X)){
		return true;
	}
	return false;
}

bool DxlibInput::getAttack2ButtonState(){
	if(CheckHitKey(KEY_INPUT_C)){
		return true;
	}
	return false;
}

bool DxlibInput::getJumpButtonState(){
	if(CheckHitKey(KEY_INPUT_Z)){
		return true;
	}
	return false;
}

bool DxlibInput::getDashButtonState(){
	if(CheckHitKey(KEY_INPUT_LSHIFT)){
		return true;
	}
	return false;
}

bool DxlibInput::getStartButtonState(){
	if(CheckHitKey(KEY_INPUT_A)){
		return true;
	}
	return false;
}

bool DxlibInput::getSelectButtonState(){
	if(CheckHitKey(KEY_INPUT_S)){
		return true;
	}
	return false;
}

bool DxlibInput::getRightButtonState(){
	if(CheckHitKey(KEY_INPUT_RIGHT)){
		return true;
	}
	return false;
}

bool DxlibInput::getLeftButtonState(){
	if(CheckHitKey(KEY_INPUT_LEFT)){
		return true;
	}
	return false;
}

bool DxlibInput::getUpButtonState(){
	if(CheckHitKey(KEY_INPUT_UP)){
		return true;
	}
	return false;
}

bool DxlibInput::getDownButtonState(){
	if(CheckHitKey(KEY_INPUT_DOWN)){
		return true;
	}
	return false;
}
