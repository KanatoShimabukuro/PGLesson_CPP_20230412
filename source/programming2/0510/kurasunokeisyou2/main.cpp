#include <stdio.h>
#include "DerivedClass.h"

int main(void) {

	DerivedClass dc;

	dc.setStr("HELLO");

	dc.printStr();

	return 0;
};
