#include <stdio.h>
#include "CBird.h"
#include "CChicken.h"
#include "CCrow.h"

int main() {

	CBird* b1,* b2;

	b1 = new CCrow();
	b2 = new CChicken();

	b1->sing(); // 親クラスの仮想関数（子クラスで定義しなおした関数）を実行
	b1->fly(); // 親クラスの関数を実行

	b2->sing();
	b2->fly();

	delete b1;
	delete b2;

	return 0;
};
