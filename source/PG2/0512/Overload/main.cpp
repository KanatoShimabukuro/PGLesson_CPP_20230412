#include <stdio.h>

long Abs(int a) {
	long ret;
	if (a < 0) {
		ret = -a;
	}
	else {
		ret = a;
	};
	return ret;
};

double Abs(double a) {
	double ret;
	if (a < 0) {
		ret = -a;
	}
	else {
		ret = a;
	};
	return ret;
};

int Input(int& nInt, double& nDouble) {
	printf("少数値を入力してください > ");
	scanf_s("%lf", &nDouble);
	return 1;
};

void DispAbs(int nInt, double nDouble) {
	printf("%d の絶対値は %d で、\n", nInt, Abs(nInt));
	printf("%lf の絶対値は %lf です。\n", nDouble, Abs(nDouble));
};

int main() {

	int nInt;
	double nDouble;

	while (Input(nInt, nDouble)) {
		DispAbs(nInt, nDouble);
	};

	return 0;
};
