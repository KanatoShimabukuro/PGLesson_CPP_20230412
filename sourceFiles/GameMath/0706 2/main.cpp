#include <stdio.h>

void main() {
    int m = 0;

    printf("‹àíŒvZb‰~‚ğ‚»‚ê‚¼‚ê‚Ì‹àí‚É•ÏŠ·‚µ‚Ü‚·B\n");

    printf("‰~‚ğ“ü—ÍF");
    scanf_s("%d", &m);

    // ‹àíŒvZ
    int man = m / 10000;          // –œ‰~‚ÌŒvZ
    int sen = (m % 10000) / 1000; // ç‰~‚ÌŒvZ
    int hyaku = (m % 1000) / 100; // •S‰~‚ÌŒvZ
    int jyuu = (m % 100) / 10;    // \‰~‚ÌŒvZ
    int en = m % 10;              // ˆê‰~‚ÌŒvZ

    printf("%d ‰~ -> %d –œ %d ç %d •S %02d \ %01d ‰~\n", m, man, sen, hyaku, jyuu, en);
};
