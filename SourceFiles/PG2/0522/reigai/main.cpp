#include <stdio.h>
#include <math.h>

int main() {
	try {
		double n;

		printf("0�ȏ�̐�������� > ");
		scanf_s("%lf", &n);

		if (n < 0) {
			throw - 1; // catch �� -1 �Ɨ�O��ʒm
		};

		printf("������ : %f\n", sqrt(n));
	}
	catch (int& err) {
		printf("�G���[�R�[�h : %d\n", err);
	};

	return 0;
};
