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
	if( DxLib_Init() == -1 )		// �c�w���C�u��������������
	{
		return -1 ;			// �G���[���N�����璼���ɏI��
	}
	DrawPixel( 320 , 240 , 0xffff ) ;	// �_��ł�
	WaitKey() ;				// �L�[���͑҂�
	DxLib_End() ;				// �c�w���C�u�����g�p�̏I������
	return 0 ;				// �\�t�g�̏I�� 
}
