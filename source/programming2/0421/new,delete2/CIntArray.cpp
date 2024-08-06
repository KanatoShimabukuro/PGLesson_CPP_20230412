#include <stdio.h>
#include <memory.h>
#include "CIntArray.h"

// �R���X�g���N�^
// new ���Z�q�Ŕz����쐬
CIntArray::CIntArray(const int nNumOf) {
	m_pnum = new int[nNumOf]; // new ���Z�q�Ŕz����쐬

	// m_pnum 
	if (m_pnum == NULL) {

		// �쐬�Ɏ��s���Ă���̂ŁAm_NumOf ��0�ŏ�����
		m_NumOf = 0;
	}
	else {
		m_NumOf = nNumOf;
		for (int i = 0; i < m_NumOf; i++) {
			m_pnum[i] = 0;
		}
	}
	printf("�R���X�g���N�^���Ăяo����܂����B\n");
	printf("�v�f���� %d �ł��B\n", m_NumOf);
}

// �f�X�g���N�^
// �z��ɕۑ����ꂽ���ׂĂ��폜
CIntArray::~CIntArray() {
	if (m_pnum != NULL) {
		delete[] m_pnum;
	}
	printf("�f�X�g���N�^���Ăяo����܂����B\n");
	printf("�v�f���� %d �ł����B\n", m_NumOf);
}

// �z��ɕۑ����ꂽ�l���擾
int CIntArray::Get(const int index) {
	CheckIndex(index);
	return m_pnum[index];
}

// �w�肳�ꂽ�C���f�b�N�X�ʒu�ɁA�l��z��ɕۑ�
void CIntArray::Set(const int index, const int value) {
	CheckIndex(index);
	m_pnum[index] = value;
}

// 
void CIntArray::CheckIndex(const int index) {
	if (index < m_NumOf) {
		return;
	}
	printf("�C���f�b�N�X���s���I\n");
	printf("�l : %d \n", index);
}