//*****************************************************
//!
//! @title testGameObject.h
//! @brief �e�X�g�p�Q�[���I�u�W�F�N�g
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
		//! @brief �R���X�g���N�^
		TestGameObject(void);

		//! @brief �f�X�g���N�^
		~TestGameObject(void);

		//! @brief �X�V
		void update(void);

		//! @brief �`��
		void draw(void);

	private:
		VECTOR	mPosition;

	};
}
