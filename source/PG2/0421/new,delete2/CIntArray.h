#pragma once


class CIntArray {
	private: // �A�N�Z�X�w��q�F����J
		int* m_pnum; // new �Ŋm�ۂ����z��f�[�^
		int m_NumOf; // �z�� m_pnum �̗v�f��

	public: // �A�N�Z�X�w��q�F���J
		/*
		* 
		*/
		CIntArray(const int nNumOf);

		/*
		* �֐����F�f�X�g���N�^
		* �����F�Ȃ�
		* �����o�ϐ��̔z�� m_pnum
		*/
		~CIntArray();

	public:
		/*
		* �֐����F�Q�b�g
		* �����F�C���f�b�N�X
		* �C���f�b�N�X�̒l�̈ʒu�Ɋi�[���ꂽ�l��Ԃ�
		*/
		int Get(const int index);

		/*
		* �֐����F�Z�b�g
		* �����F�C���f�b�N�X�A�l
		* �C���f�b�N�X�̒l�̈ʒu�ɒl���i�[
		*/
		void Set(const int index, const int value);

	private:
		void CheckIndex(const int index);
};

