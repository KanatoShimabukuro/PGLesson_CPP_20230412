#include <stdio.h>

namespace Name1 {
	void Func() {
		printf("Name1::Func\n");
	};
};

namespace Name2 {
	void Func() {
		printf("Name2::Func\n");
	};
};

int main() {
	Name1::Func();
	Name2::Func();

	return 0;
};
