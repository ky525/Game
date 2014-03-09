//*****************************************************
//!
//! @title gameObjectManager.h
//! @brief �Q�[���I�u�W�F�N�g�Ǘ��N���X(�V���O���g��)
//! @author ky
//!
//*****************************************************

#include "gameObject.h"
#include "gameObjectManager.h"

using namespace game;

//-----------------------------------------------------
//! @brief �R���X�g���N�^
//-----------------------------------------------------
GameObjectManager::GameObjectManager(void)
{
}
//-----------------------------------------------------
//! @brief �f�X�g���N�^
//-----------------------------------------------------
GameObjectManager::~GameObjectManager(void)
{
}
//-----------------------------------------------------
//! @brief �C���X�^���X�擾
//-----------------------------------------------------
GameObjectManager *GameObjectManager::getInstance(void)
{
	static GameObjectManager instance;
	return &instance;
}
//-----------------------------------------------------
//! @brief �ǉ�
//-----------------------------------------------------
void GameObjectManager::addGameObject(GameObject *element)
{
	mGameObjectTbl.push_back(element);
}
//-----------------------------------------------------
//! @brief �X�V
//-----------------------------------------------------
void GameObjectManager::updateGameObject(void)
{
	auto it = mGameObjectTbl.begin();
	while(it != mGameObjectTbl.end())
	{
		(*it)->update();
		++it;
	}
}
//-----------------------------------------------------
//! @brief �`��
//-----------------------------------------------------
void GameObjectManager::drawGameObject(void)
{
	auto it = mGameObjectTbl.begin();
	while(it != mGameObjectTbl.end())
	{
		(*it)->draw();
		++it;
	}
}