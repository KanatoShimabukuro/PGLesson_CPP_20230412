#include <stdio.h>
#include "POS.h"

POS::POS() { // �R���X�g���N�^�̊֐���`
	x = 0;
	y = 0;
};

POS::~POS() {
	printf("�f�X�g���N�^�Ăяo��\n");
};

void POS::print() {
	printf("x : %lf y : %lf\n", x, y);
};
