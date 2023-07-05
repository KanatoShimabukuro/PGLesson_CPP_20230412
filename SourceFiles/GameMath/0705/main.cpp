#include <stdio.h>

int timeTransform(int inputMode, int inputTime, int outputMode) {
    int outputTime = 0;

    if (inputMode == outputMode) {
        // ���̓��[�h�Əo�̓��[�h�������ꍇ�A���͎��Ԃ����̂܂܏o�͎��ԂƂ���
        outputTime = inputTime;
    }
    else {
        // �قȂ郂�[�h�̏ꍇ�͕ϊ����s��
        if (inputMode == 1 && outputMode == 2) {
            // Hour����Minute�ւ̕ϊ�
            outputTime = inputTime * 60;
        }
        else if (inputMode == 1 && outputMode == 3) {
            // Hour����Second�ւ̕ϊ�
            outputTime = inputTime * 3600;
        }
        else if (inputMode == 2 && outputMode == 1) {
            // Minute����Hour�ւ̕ϊ�
            outputTime = inputTime / 60;
        }
        else if (inputMode == 2 && outputMode == 3) {
            // Minute����Second�ւ̕ϊ�
            outputTime = inputTime * 60;
        }
        else if (inputMode == 3 && outputMode == 1) {
            // Second����Hour�ւ̕ϊ�
            outputTime = inputTime / 3600;
        }
        else if (inputMode == 3 && outputMode == 2) {
            // Second����Minute�ւ̕ϊ�
            outputTime = inputTime / 60;
        };
    };

    return outputTime;
};

bool getTime() {
	int inputMode, inputTime;
	printf("���ԕϊ��b0:�I���b1:Hour�b2:Minute�b3:Secound\n");

	printf("�ϊ��O�̎��Ԃ�I���F");
	scanf_s("%d", &inputMode);

    if (inputMode == 0) return false;

	printf("�ϊ��O�̎��ԁF");
	scanf_s("%d", &inputTime);

	printf("\n�ϊ���̎��ԁi���j�F%d\n", timeTransform(inputMode, inputTime, 1));
    printf("�ϊ���̎��ԁi���j�F%d\n", timeTransform(inputMode, inputTime, 2));
    printf("�ϊ���̎��ԁi�b�j�F%d\n\n", timeTransform(inputMode, inputTime, 3));

    return true;
};

void main() {
    while(getTime());
};
