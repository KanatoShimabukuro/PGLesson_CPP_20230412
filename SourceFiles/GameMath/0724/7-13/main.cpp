#include <stdio.h>
#include <math.h>

// FPS
#define FPS 60

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

struct Point {
    float x, y;
};

struct Vector {
    float x, y;
};

// 座標 + ベクトル
Point Add_Point_Vector(Point p, Vector v) {
    Point r;
    r.x = p.x + v.x;
    r.y = p.y + v.y;
    return r;
};

// ベクトル + ベクトル
Vector Add_Vector_Vector(Vector v0, Vector v1) {
    Vector r;
    r.x = v0.x + v1.x;
    r.y = v0.y + v1.y;
    return r;
}

// 移動
void Move(Point* pos, Vector* speed, Vector accel) {
    // 加速度の影響を速度へ
    *(speed) = Add_Vector_Vector(*(speed), accel);
    // 速度の影響を座標へ
    *(pos) = Add_Point_Vector(*(pos), *(speed));
};

// ベクトル * スカラー
Vector Mul_Vector_Scaler(Vector v, float s) {
    Vector r;
    r.x = v.x * s;
    r.y = v.y * s;
    return r;
};

// ベクトル長さ
float Vector_Length(Vector v) {
    float l = sqrtf(v.x * v.x + v.y * v.y);
    return l;
};

// ベクトル正規化
Vector Vector_Normalize(Vector v) {
    float l = Vector_Length(v);
    Vector n;
    n.x = v.x / l;
    n.y = v.y / l;
    return n;
};

// ベクトル長さ設定
Vector Vector_SetLength(Vector v, float len) {
    v = Vector_Normalize(v);
    v = Mul_Vector_Scaler(v, len);
    return v;
};

void main() {
    Vector speed; // Speed 設定
    speed.x = 1.0f;
    speed.y = 1.0f;
    speed = Vector_SetLength(speed, M_S(30.0f));
    printf("30m/s ->（%f, %f）\n", speed.x, speed.y);

    Vector accel; // 加速度 設定
    accel.x = 1.0f;
    accel.y = 1.0f;
    accel = Vector_SetLength(accel, M_S2(2.0f));
    printf("2m/s^2 ->（%f, %f）\n", accel.x, accel.y);
};
