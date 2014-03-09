//*****************************************************
//!
//! @title gameObjectManager.h
//! @brief ゲームオブジェクト管理クラス(シングルトン)
//! @author ky
//!
//*****************************************************

#include "gameObject.h"
#include "gameObjectManager.h"

using namespace game;

//-----------------------------------------------------
//! @brief コンストラクタ
//-----------------------------------------------------
GameObjectManager::GameObjectManager(void)
{
}
//-----------------------------------------------------
//! @brief デストラクタ
//-----------------------------------------------------
GameObjectManager::~GameObjectManager(void)
{
}
//-----------------------------------------------------
//! @brief インスタンス取得
//-----------------------------------------------------
GameObjectManager *GameObjectManager::getInstance(void)
{
	static GameObjectManager instance;
	return &instance;
}
//-----------------------------------------------------
//! @brief 追加
//-----------------------------------------------------
void GameObjectManager::addGameObject(GameObject *element)
{
	mGameObjectTbl.push_back(element);
}
//-----------------------------------------------------
//! @brief 更新
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
//! @brief 描画
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