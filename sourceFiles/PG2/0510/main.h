#pragma once

class Test {
	// �{����private
public:
	int num1 = 0; // �D��x�F��A��ΌĂ΂��
	int num2 = 0;
	int num3 = 0;
public:
	Test() : num2(10), num3(10) { // �D��x�F��
		num3 = 20; // �@�\�I�ɂ͑��
	};
	int getNum() {
		return num1;
	};
};