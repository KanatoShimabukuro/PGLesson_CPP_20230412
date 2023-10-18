#include <stdio.h>
#include "DerivedClass.h"

void DerivedClass::setStr(const char* s) {
	// 親クラスのプロテクトメンバー変数 str に値を変更
	str = s;
};

void DerivedClass::printStr() {
	printf("%s\n", str);
};