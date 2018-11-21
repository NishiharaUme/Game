#ifndef DXLIB_INPUT_H
#define DXLIB_INPUT_H

#include "Input.h"

class DxlibInput : public Input{
	public:
		// ボタンの入力状態を取得する関数
		// trueなら押されている
		virtual bool getOKButtonState();
		virtual bool getCancelButtonState();
		virtual bool getAttack1ButtonState();
		virtual bool getAttack2ButtonState();
		virtual bool getJumpButtonState();
		virtual bool getDashButtonState();
		virtual bool getStartButtonState();
		virtual bool getSelectButtonState();
		virtual bool getRightButtonState();
		virtual bool getLeftButtonState();
		virtual bool getUpButtonState();
		virtual bool getDownButtonState();
};

#endif
