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

// 加速度 m / s ^ 2
#define M_S2(_acc) (M(_acc)/(SECOND(1.0f)*SECOND(1.0f)))


void Move(float* pos, float* speed, float acceleration) {
    // 加速度の影響を速度へ
    *(speed) += acceleration;
    // 速度の影響を座標へ
    *(pos) += *(speed);
};

void main() {
    float pos = 0.0f;                // 座標
    float speed = M_S(30.0f);        // 初速度（30m/s）
    float acceleration = M_S2(2.0f); // 加速度（2m/s^2）

    // 2s 移動処理
    for (int h = 0; h < SECOND(2); ++h) {
        // 移動前
        printf("%f 秒：（座標：%f 速度：%f）->", (float)h / SECOND(1.0f), pos, speed);

        // 移動
        Move(&pos, &speed, acceleration);

        // 移動後
        printf("（座標：%f 速度：%f）\n", pos, speed);
    };
};
