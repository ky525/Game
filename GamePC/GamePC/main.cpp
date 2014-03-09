//*****************************************************
//!
//! @title main.cpp
//! @brief メイン関数
//! @author ky
//!
//*****************************************************

#include "DxLib.h"
#include "TestGameObject.h"
#include "GameObjectManager.h"

using namespace game;
//-----------------------------------------------------
//! @brief メイン関数
//-----------------------------------------------------
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(true);
	SetGraphMode(1280, 720, 32);

	// ＤＸライブラリ初期化処理
	if(DxLib_Init() == -1)
	{
		// エラーが起きたら直ちに終了
		return -1;
	}

#if 0
	// テ
	DrawLine(200,200,400,200,0xffffffff);
	DrawLine(150,300,450,300,0xffffffff);
	DrawLine(300,300,250,500,0xffffffff);

	// ツ
	DrawLine(500,200,550,300,0xffffffff);
	DrawLine(600,200,650,300,0xffffffff);
	DrawLine(800,200,650,500,0xffffffff);

	// ！
	DrawLine(1000,200,1000,400,0xffffffff,15);
	DrawLine(1000,485,1000,500,0xffffffff,15);

	WaitKey() ;				// キー入力待ち
#endif

	// 描画先を裏画面に設定
	SetDrawScreen(DX_SCREEN_BACK);

	// ゲームオブジェクトをマネージャに追加する
	// TODO シーン管理機構作成
	auto *g = new TestGameObject();
	GameObjectManager::getInstance()->addGameObject(g);

	// メインループ
	// TODO 別スレッド化
	while(!ProcessMessage() && !ClearDrawScreen())
	{
		// ゲームオブジェクトの更新
		GameObjectManager::getInstance()->updateGameObject();

		// ゲームオブジェクトの描画
		GameObjectManager::getInstance()->drawGameObject();

		ScreenFlip();
	}

	// ＤＸライブラリ使用の終了処理
	DxLib_End();

	// ソフトの終了
	return 0;
}
