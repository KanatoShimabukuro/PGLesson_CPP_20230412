#include <stdio.h>
#include "POS.h"

POS::POS() { // コンストラクタの関数定義
	x = 0;
	y = 0;
};

POS::~POS() {
	printf("デストラクタ呼び出し\n");
};

void POS::print() {
	printf("x : %lf y : %lf\n", x, y);
};
