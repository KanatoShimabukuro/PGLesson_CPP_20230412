#pragma once

#include "BaseClass.h"

// �e�N���X�i�X�[�p�[�N���X�j�� BaseClass ���琫�������p���A�Ǝ��Ɋg�������A
// �q�N���X�� DevivedClass ���쐬�i�I�u�W�F�N�g�w���E�ł́A������p���j
class DerivedClass : public BaseClass {
public:
	void setStr(const char* s);
	void printStr();
};