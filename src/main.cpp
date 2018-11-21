#include "DxLib.h"
#include "Image.h"
#include "DxlibImage.h"
#include "DxlibTestBoxAndLineImage.h"
#include "GameCamera.h"
#include "GameEntityCamera.h"
#include "Input.h"
#include "DxlibInput.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	// ウィンドウモードに設定
	ChangeWindowMode(TRUE);
	
	// ＤＸライブラリ初期化処理
	if(DxLib_Init() == -1){
		// エラーが起きたら直ちに終了
		return -1;
	}
	
	//描画先を裏画面に設定
	SetDrawScreen(DX_SCREEN_BACK);

	Input *input = new DxlibInput();

	GameCamera *camera = new GameEntityCamera(640, 480, 1, 10);

	Image *img = new DxlibTestBoxAndLineImage(100, 150, true);

	double cameraNextX = 0;
	double cameraNextY = 0;
	double deltaXY = 3;
	camera->setLeftX(cameraNextX);
	camera->setTopY(cameraNextY);
	
	while(true){
		// メッセージ処理
		if(ProcessMessage() != 0){
			//ウィンドウの×ボタンが押されたらループを抜ける
			break;
		}

		// 画面を消す
		ClearDrawScreen();

		cameraNextX = camera->getLeftX();
		cameraNextY = camera->getTopY();

		if(input->getRightButtonState()){
			cameraNextX += deltaXY;
		}
		if(input->getLeftButtonState()){
			cameraNextX -= deltaXY;
		}
		if(input->getUpButtonState()){
			cameraNextY -= deltaXY;
		}
		if(input->getDownButtonState()){
			cameraNextY += deltaXY;
		}

		camera->setLeftX(cameraNextX);
		camera->setTopY(cameraNextY);

		camera->setImage(50, 100, img, 1);

		camera->draw();

		//裏画面を表画面に反映
		ScreenFlip();
	}

	delete img;
	delete camera;
	delete input;

	// ＤＸライブラリ使用の終了処理
	DxLib_End();

	// ソフトの終了 
	return 0;
}
