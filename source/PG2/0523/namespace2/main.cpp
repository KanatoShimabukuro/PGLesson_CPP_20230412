#include <stdio.h>

namespace NameA {
	int a = 10;
	void show(void) {
		printf("���O��� NameA �̃O���[�o���ϐ� a : %d\n", NameA::a);
	};
};

using namespace NameA;

int main() {
	// NameA::a �Ə����Ȃ��ėǂ�
	printf("���O��� NameA �̃O���[�o���ϐ� a : %d\n", a);
	
	// NameA::show() �Ə����Ȃ��ėǂ�
	show();

	return 0;
};
