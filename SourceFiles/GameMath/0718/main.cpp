#include <stdio.h>

// FPS
#define FPS 30

// sec
#define SECOND(_sec) ((_sec)*FPS)

// min
#define MINUTE(_min) (SECOND((_min)*60))

// hour
#define HOUR(_hour) (MINUTE((_hour)*60))


// mm
#define MM(_mm) (CM(0.1f*(_mm)))

// cm
#define CM(_cm) (M(0.01f*(_cm)))

// m
#define M(_m) (_m)

// km
#define KM(_km) (M(1000.0f*(_km)))


// m / s
#define M_S(_speed) (M(_speed)/SECOND(1.0f))

// km / h
#define KM_H(_speed) (KM(_speed)/HOUR(1.0f))

// �����x m / s ^ 2
#define M_S2(_acc) (M(_acc)/(SECOND(1.0f)*SECOND(1.0f)))


void Move(float* pos, float* speed, float acceleration) {
    // �����x�̉e���𑬓x��
    *(speed) += acceleration;
    // ���x�̉e�������W��
    *(pos) += *(speed);
};

void main() {
    float pos = 0.0f;                // ���W
    float speed = M_S(30.0f);        // �����x�i30m/s�j
    float acceleration = M_S2(2.0f); // �����x�i2m/s^2�j

    // 2s �ړ�����
    for (int h = 0; h < SECOND(2); ++h) {
        // �ړ��O
        printf("%f �b�F�i���W�F%f ���x�F%f�j->", (float)h / SECOND(1.0f), pos, speed);

        // �ړ�
        Move(&pos, &speed, acceleration);

        // �ړ���
        printf("�i���W�F%f ���x�F%f�j\n", pos, speed);
    };
};
