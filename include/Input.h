#ifndef INPUT_H
#define INPUT_H

class Input{
	public:
		virtual ~Input(){}
		// ボタンの入力状態を取得する関数
		// trueなら押されている
		virtual bool getOKButtonState() = 0;
		virtual bool getCancelButtonState() = 0;
		virtual bool getAttack1ButtonState() = 0;
		virtual bool getAttack2ButtonState() = 0;
		virtual bool getJumpButtonState() = 0;
		virtual bool getDashButtonState() = 0;
		virtual bool getStartButtonState() = 0;
		virtual bool getSelectButtonState() = 0;
		virtual bool getRightButtonState() = 0;
		virtual bool getLeftButtonState() = 0;
		virtual bool getUpButtonState() = 0;
		virtual bool getDownButtonState() = 0;
};

#endif
