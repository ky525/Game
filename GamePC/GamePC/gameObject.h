//*****************************************************
//!
//! @title gameObject.h
//! @brief �Q�[�����I�u�W�F�N�g�̊��N���X
//! @author ky
//!
//*****************************************************

namespace game
{
	class GameObject
	{
		public:
			//! @brief �R���X�g���N�^
			GameObject(void);

			//! @brief �f�X�g���N�^
			~GameObject(void);

			//! @brief �X�V
			virtual void update(void){};

			//! @brief �`��
			virtual void draw(void){};
	};
}
