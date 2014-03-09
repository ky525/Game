//*****************************************************
//!
//! @title gameObjectManager.h
//! @brief �Q�[���I�u�W�F�N�g�Ǘ��N���X(�V���O���g��)
//! @author ky
//!
//*****************************************************

#include <vector>

namespace game
{
	// �O���錾
	class GameObject;

	class GameObjectManager
	{
	private:
		//! @brief �R���X�g���N�^
		GameObjectManager(void);

		//! @brief �f�X�g���N�^
		~GameObjectManager(void);

		//! @brief �R�s�[
		GameObjectManager(const GameObjectManager &rhs);

		//! @brief ���
		GameObjectManager &operator=(const GameObjectManager &rhs);

	public:
		//! @brief �C���X�^���X�擾
		static GameObjectManager *getInstance(void);

		//! @brief �ǉ�
		void addGameObject(GameObject *element);

		//! @brief �X�V
		void updateGameObject(void);

		//! @brief �`��
		void drawGameObject(void);

	private:
		std::vector<GameObject*> mGameObjectTbl;	//!< �Q�[���I�u�W�F�N�g�e�[�u��
	};
}