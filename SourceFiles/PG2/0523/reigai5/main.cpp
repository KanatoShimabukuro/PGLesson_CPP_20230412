#include <stdio.h>

void Func() {
	try {
		throw 1;
	}
	catch (int nError) {
		throw "Error";
	}
	catch (const char* str) {
		// こっちでキャッチされるかな？
		printf("Func : %s\n", str);
	};
}

int main() {
	try {
		Func();
	}
	catch (const char* str) {
		// それともここ？
		printf("Main : %s\n", str);
	}

	return 0;
};
