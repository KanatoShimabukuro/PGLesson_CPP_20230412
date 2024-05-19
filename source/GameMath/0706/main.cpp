#include <stdio.h>

void main() {
    int t = 0;

    printf("•b‚ğA•ªA•b‚É•ÏŠ·‚µ‚Ü‚·B\n");

    printf("•b”‚ğ“ü—ÍF");
    scanf_s("%d", &t);

    // E•ªE•b‚É“WŠJ
    int hour = t / 3600;        // •b‚©‚çŠÔ‚É•ÏŠ·
    int min = (t % 3600) / 60;  // •b‚©‚ç•ª‚É•ÏŠ·
    int sec = (t % 3600) % 60;  // •b‚©‚ç•b‚É•ÏŠ·
    
    printf("%d •b -> %d ŠÔ %02d •ª %02d •b\n", t, hour, min, sec);
};
