#include "POS.h"

int main(void) {

	POS pos1; // この時点でコンストラクタが宣言
	POS pos2(100,200);
	POS pos3 = POS(300, 400);
	POS pos4 = POS();
	POS pos5{};
	// POS pos6(); Error

	pos1.print();
	pos2.print();
	pos3.print();
	pos4.print();
	pos5.print();

	return 0;
};
