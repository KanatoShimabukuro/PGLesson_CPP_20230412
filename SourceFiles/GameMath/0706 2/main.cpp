#include <stdio.h>

void main() {
    int m = 0;

    printf("����v�Z�b�~�����ꂼ��̋���ɕϊ����܂��B\n");

    printf("�~����́F");
    scanf_s("%d", &m);

    // ����v�Z
    int man = m / 10000;          // ���~�̌v�Z
    int sen = (m % 10000) / 1000; // ��~�̌v�Z
    int hyaku = (m % 1000) / 100; // �S�~�̌v�Z
    int jyuu = (m % 100) / 10;    // �\�~�̌v�Z
    int en = m % 10;              // ��~�̌v�Z

    printf("%d �~ -> %d �� %d �� %d �S %02d �\ %01d �~\n", m, man, sen, hyaku, jyuu, en);
};
