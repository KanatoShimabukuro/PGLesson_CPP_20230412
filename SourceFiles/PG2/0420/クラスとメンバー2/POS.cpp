#include <stdio.h>
#include "POS.h"

POS::POS() { // �R���X�g���N�^�̊֐���`
	x = 0;
	y = 0;
};

POS::POS(int tmp_x, int tmp_y) {
	x = tmp_x;
	y = tmp_y;
};

void POS::print() {
	printf("x : %lf y : %lf\n", x, y);
};
