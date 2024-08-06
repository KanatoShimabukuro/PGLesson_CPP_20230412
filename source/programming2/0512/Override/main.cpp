#include <stdio.h>
#include "CBird.h"
#include "CChicken.h"
#include "CCrow.h"

int main() {

	CBird* b1,* b2;

	b1 = new CCrow();
	b2 = new CChicken();

	b1->sing(); // �e�N���X�̉��z�֐��i�q�N���X�Œ�`���Ȃ������֐��j�����s
	b1->fly(); // �e�N���X�̊֐������s

	b2->sing();
	b2->fly();

	delete b1;
	delete b2;

	return 0;
};
