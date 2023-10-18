#include <stdio.h>

int main() {
	try {
		throw "例外発生";
	}
	catch (const char* err) { // 型が一致していないとダメ
		printf("エラーコード : %s\n", err);
	};

	return 0;
};
