//*****************************************************
//!
//! @title testGameObject.cpp
//! @brief �e�X�g�p�Q�[���I�u�W�F�N�g
//! @author ky
//!
//*****************************************************

#include "testGameObject.h"

using namespace game;

//-----------------------------------------------------
//! @brief �R���X�g���N�^
//-----------------------------------------------------
TestGameObject::TestGameObject(void)
	:
mPosition()
{
}
//-----------------------------------------------------
//! @brief �f�X�g���N�^
//-----------------------------------------------------
TestGameObject::~TestGameObject(void)
{
}
//-----------------------------------------------------
//! @brief �X�V
//-----------------------------------------------------
void TestGameObject::update(void)
{
	mPosition.x += 1.0f;
	if(mPosition.x > 500.0f)
	{
		mPosition.x = 0.0f;
	}
}
//-----------------------------------------------------
//! @brief �`��
//-----------------------------------------------------
void TestGameObject::draw(void)
{
	DrawLine(0, 100, static_cast<int>(mPosition.x), 100, 0xffffffff, 50);
}
