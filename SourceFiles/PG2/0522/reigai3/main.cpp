#include <stdio.h>

int main() {
	try {
		throw "��O����";
	}
	catch (const char* err) { // �^����v���Ă��Ȃ��ƃ_��
		printf("�G���[�R�[�h : %s\n", err);
	};

	return 0;
};
