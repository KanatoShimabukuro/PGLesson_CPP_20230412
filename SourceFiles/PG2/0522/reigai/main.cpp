#include <stdio.h>
#include <math.h>

int main() {
	try {
		double n;

		printf("0以上の数字を入力 > ");
		scanf_s("%lf", &n);

		if (n < 0) {
			throw - 1; // catch に -1 と例外を通知
		};

		printf("平方根 : %f\n", sqrt(n));
	}
	catch (int& err) {
		printf("エラーコード : %d\n", err);
	};

	return 0;
};
