#include <stdio.h>

void main() {
    int t = 0;

    printf("�b�����A���A�b�ɕϊ����܂��B\n");

    printf("�b������́F");
    scanf_s("%d", &t);

    // ���E���E�b�ɓW�J
    int hour = t / 3600;        // �b���玞�Ԃɕϊ�
    int min = (t % 3600) / 60;  // �b���番�ɕϊ�
    int sec = (t % 3600) % 60;  // �b����b�ɕϊ�
    
    printf("%d �b -> %d ���� %02d �� %02d �b\n", t, hour, min, sec);
};
