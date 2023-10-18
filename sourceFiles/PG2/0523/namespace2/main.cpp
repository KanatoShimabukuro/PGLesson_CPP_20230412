#include <stdio.h>

namespace NameA {
	int a = 10;
	void show(void) {
		printf("名前空間 NameA のグローバル変数 a : %d\n", NameA::a);
	};
};

using namespace NameA;

int main() {
	// NameA::a と書かなくて良い
	printf("名前空間 NameA のグローバル変数 a : %d\n", a);
	
	// NameA::show() と書かなくて良い
	show();

	return 0;
};
