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
