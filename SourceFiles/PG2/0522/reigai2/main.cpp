#include <stdio.h>
#include <math.h>

int Func() {
	double n;

	printf("0�ȏ�̐�������� > ");
	scanf_s("%lf", &n);

	if (n < 0) {
		throw - 1;
	};

	printf("������ : %f\n", sqrt(n));
};

int main() {
	try {
		Func();
	}
	catch (int& err) { // ��O�͊֐��O�܂œ͂�
		printf("�G���[�R�[�h : %d\n", err);
	};

	return 0;
};
