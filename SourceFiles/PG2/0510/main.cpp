#include <stdio.h>
#include "main.h"

int main(void) {

	Test* obj = new Test();

	printf("%d\n", obj->num1);
	printf("%d\n", obj->num2);
	printf("%d\n", obj->num3);

	//printf("%d\n", obj->getNum());

	delete obj;

	return 0;
};
