#pragma once

#include "BaseClass.h"

// 親クラス（スーパークラス）の BaseClass から性質を引継ぎ、独自に拡張した、
// 子クラスの DevivedClass を作成（オブジェクト指向界では、これを継承）
class DerivedClass : public BaseClass {
public:
	void setStr(const char* s);
	void printStr();
};