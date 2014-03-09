//*****************************************************
//!
//! @title testGameObject.h
//! @brief テスト用ゲームオブジェクト
//! @author ky
//!
//*****************************************************

#include "dxlib.h"
#include "GameObject.h"

namespace game
{
	class TestGameObject : public GameObject
	{
	public:
		//! @brief コンストラクタ
		TestGameObject(void);

		//! @brief デストラクタ
		~TestGameObject(void);

		//! @brief 更新
		void update(void);

		//! @brief 描画
		void draw(void);

	private:
		VECTOR	mPosition;

	};
}
