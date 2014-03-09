//*****************************************************
//!
//! @title gameObject.h
//! @brief ゲーム内オブジェクトの基底クラス
//! @author ky
//!
//*****************************************************

namespace game
{
	class GameObject
	{
		public:
			//! @brief コンストラクタ
			GameObject(void);

			//! @brief デストラクタ
			~GameObject(void);

			//! @brief 更新
			virtual void update(void){};

			//! @brief 描画
			virtual void draw(void){};
	};
}
