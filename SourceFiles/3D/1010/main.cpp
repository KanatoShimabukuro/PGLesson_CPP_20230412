#include "main.h"

void main() {
    int a, b;

    printf("計算機\n\n");

    printf("数字 1 を入力：");
    scanf_s("%d", &a);

    printf("数字 2 を入力：");
    scanf_s("%d", &b);

    printf("\n");
    printf("加算：%d\n", Calculator::addition(a, b));
    printf("減算：%d\n", Calculator::subtraction(a, b));
    printf("乗算：%d\n", Calculator::multiplication(a, b));
    printf("除算：%d\n", Calculator::division(a, b));
};
