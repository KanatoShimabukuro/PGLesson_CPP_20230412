#include "main.h"

void main() {
    int a, b;

    printf("�v�Z�@\n\n");

    printf("���� 1 ����́F");
    scanf_s("%d", &a);

    printf("���� 2 ����́F");
    scanf_s("%d", &b);

    printf("\n");
    printf("���Z�F%d\n", Calculator::addition(a, b));
    printf("���Z�F%d\n", Calculator::subtraction(a, b));
    printf("��Z�F%d\n", Calculator::multiplication(a, b));
    printf("���Z�F%d\n", Calculator::division(a, b));
};
