#include <stdio.h>
#include "CTest.h"

int main() {

	CTest test1, test2;

	printf("Test1 : %p\n", &test1); // test1 のアドレスを表示
	printf("Test2 : %p\n", &test2);

	printf("Test1 : %p\n", test1.RetThis()); // Objectのアドレスを取得
	printf("Test2 : %p\n", test2.RetThis());

	return 0;
};
