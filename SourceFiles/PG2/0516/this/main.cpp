#include <stdio.h>
#include "CTest.h"

int main() {

	CTest test1, test2;

	printf("Test1 : %p\n", &test1); // test1 �̃A�h���X��\��
	printf("Test2 : %p\n", &test2);

	printf("Test1 : %p\n", test1.RetThis()); // Object�̃A�h���X���擾
	printf("Test2 : %p\n", test2.RetThis());

	return 0;
};
