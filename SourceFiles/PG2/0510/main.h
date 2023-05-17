#pragma once

class Test {
	// 本来はprivate
public:
	int num1 = 0; // 優先度：低、絶対呼ばれる
	int num2 = 0;
	int num3 = 0;
public:
	Test() : num2(10), num3(10) { // 優先度：中
		num3 = 20; // 機能的には代入
	};
	int getNum() {
		return num1;
	};
};