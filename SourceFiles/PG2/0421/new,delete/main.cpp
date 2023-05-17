#include <stdio.h>

int main(void) {

	int* pNum1 = new int;
	short* pNum2 = new short(50);

	*pNum1 = 100;

	printf("Num1 : %d\n", *pNum1);
	printf("Num2 : %d\n", *pNum2);

	delete pNum1;
	delete pNum2;

	return 0;
};
