#include "POS.h"

POS::POS() { // コンストラクタの関数定義
	x = 0;
	y = 0;
};

int POS::getX() const {
	return x;
}

int POS::getY() const {
	return y;
}

void POS::setX(int tmpX) {
	x = tmpX;
}

void POS::setY(int tmpY) {
	y = tmpY;
}
