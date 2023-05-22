#include <stdio.h>
#include <math.h>

int Func() {
	double n;

	printf("0以上の数字を入力 > ");
	scanf_s("%lf", &n);

	if (n < 0) {
		throw - 1;
	};

	printf("平方根 : %f\n", sqrt(n));
};

int main() {
	try {
		Func();
	}
	catch (int& err) { // 例外は関数外まで届く
		printf("エラーコード : %d\n", err);
	};

	return 0;
};
