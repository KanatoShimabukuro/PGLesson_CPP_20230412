#include <stdio.h>
#include "DerivedClass.h"

void DerivedClass::setStr(const char* s) {
	// �e�N���X�̃v���e�N�g�����o�[�ϐ� str �ɒl��ύX
	str = s;
};

void DerivedClass::printStr() {
	printf("%s\n", str);
};