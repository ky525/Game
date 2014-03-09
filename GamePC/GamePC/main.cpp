//*****************************************************
//!
//! @title main.cpp
//! @brief ���C���֐�
//! @author ky
//!
//*****************************************************

#include "DxLib.h"
#include "TestGameObject.h"
#include "GameObjectManager.h"

using namespace game;
//-----------------------------------------------------
//! @brief ���C���֐�
//-----------------------------------------------------
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(true);
	SetGraphMode(1280, 720, 32);

	// �c�w���C�u��������������
	if(DxLib_Init() == -1)
	{
		// �G���[���N�����璼���ɏI��
		return -1;
	}

#if 0
	// �e
	DrawLine(200,200,400,200,0xffffffff);
	DrawLine(150,300,450,300,0xffffffff);
	DrawLine(300,300,250,500,0xffffffff);

	// �c
	DrawLine(500,200,550,300,0xffffffff);
	DrawLine(600,200,650,300,0xffffffff);
	DrawLine(800,200,650,500,0xffffffff);

	// �I
	DrawLine(1000,200,1000,400,0xffffffff,15);
	DrawLine(1000,485,1000,500,0xffffffff,15);

	WaitKey() ;				// �L�[���͑҂�
#endif

	// �`���𗠉�ʂɐݒ�
	SetDrawScreen(DX_SCREEN_BACK);

	// �Q�[���I�u�W�F�N�g���}�l�[�W���ɒǉ�����
	// TODO �V�[���Ǘ��@�\�쐬
	auto *g = new TestGameObject();
	GameObjectManager::getInstance()->addGameObject(g);

	// ���C�����[�v
	// TODO �ʃX���b�h��
	while(!ProcessMessage() && !ClearDrawScreen())
	{
		// �Q�[���I�u�W�F�N�g�̍X�V
		GameObjectManager::getInstance()->updateGameObject();

		// �Q�[���I�u�W�F�N�g�̕`��
		GameObjectManager::getInstance()->drawGameObject();

		ScreenFlip();
	}

	// �c�w���C�u�����g�p�̏I������
	DxLib_End();

	// �\�t�g�̏I��
	return 0;
}
