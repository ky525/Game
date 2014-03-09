//*****************************************************
//!
//! @title gameObjectManager.h
//! @brief ゲームオブジェクト管理クラス(シングルトン)
//! @author ky
//!
//*****************************************************

#include <vector>

namespace game
{
	// 前方宣言
	class GameObject;

	class GameObjectManager
	{
	private:
		//! @brief コンストラクタ
		GameObjectManager(void);

		//! @brief デストラクタ
		~GameObjectManager(void);

		//! @brief コピー
		GameObjectManager(const GameObjectManager &rhs);

		//! @brief 代入
		GameObjectManager &operator=(const GameObjectManager &rhs);

	public:
		//! @brief インスタンス取得
		static GameObjectManager *getInstance(void);

		//! @brief 追加
		void addGameObject(GameObject *element);

		//! @brief 更新
		void updateGameObject(void);

		//! @brief 描画
		void drawGameObject(void);

	private:
		std::vector<GameObject*> mGameObjectTbl;	//!< ゲームオブジェクトテーブル
	};
}