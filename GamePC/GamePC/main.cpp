//*****************************************************
//!
//! @title main.cpp
//! @brief ���C���֐�
//! @author ky
//!
//*****************************************************

#include "DxLib.h"

//-----------------------------------------------------
//! @brief ���C���֐�
//-----------------------------------------------------
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow )
{
	ChangeWindowMode(true);
	SetGraphMode(1280, 720, 32);
	if( DxLib_Init() == -1 )		// �c�w���C�u��������������
	{
		return -1 ;			// �G���[���N�����璼���ɏI��
	}

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
	DxLib_End() ;				// �c�w���C�u�����g�p�̏I������
	return 0 ;				// �\�t�g�̏I�� 
}
