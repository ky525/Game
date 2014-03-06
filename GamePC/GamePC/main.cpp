//*****************************************************
//!
//! @title main.cpp
//! @brief ���C���֐�
//! @author ky
//!
//*****************************************************

#include "d3d11.h"

//-----------------------------------------------------
//! @brief �E�B���h�E�R�[���o�b�N
//-----------------------------------------------------
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch(message){
	case WM_CLOSE:
		PostMessage(hWnd, WM_DESTROY, 0, 0);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	}

	return(DefWindowProc(hWnd, message, wParam, lParam));
}
//-----------------------------------------------------
//! @brief ���C��
//-----------------------------------------------------
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	//�E�B���h�E�N���X��o�^����
	TCHAR szWindowClass[] = "3DDISPPG";
	WNDCLASS wcex;
	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;
	wcex.hIcon			= NULL;
	wcex.hCursor		= NULL;
	wcex.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
	wcex.lpszMenuName	= NULL;
	wcex.lpszClassName	= szWindowClass;
	RegisterClass(&wcex);

	//�E�B���h�E���N���G�C�g
	HWND hWnd;
	hWnd = CreateWindow(szWindowClass,
        "3D Disp Pg",
        WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
        0,
        0,
        1280,
        720,
        NULL,
        NULL,
        hInstance,
        NULL);

	//��ŏ������C�Ƃ肠�����E�B���h�E���o���Ȃ��Ƃ킩��h���̂�
	ShowWindow(hWnd, nCmdShow);

	//���C�����[�v
	MSG hMsg;
	while(true){
		while(PeekMessageW(&hMsg, NULL, 0, 0, PM_REMOVE)){
			if(hMsg.message == WM_QUIT){
				goto End;
			}
			TranslateMessage(&hMsg);
			DispatchMessage(&hMsg);
		}
	}

End:
	return 0;
}