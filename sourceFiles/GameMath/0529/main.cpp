/* リスト5.6, 5.7改 内積の関数の利用
* 2-4 島袋叶望
*/

#define _USE_MATH_DEFINES

// degree -> radian
#define DEGREE_RADIAN(_deg) (M_PI * (_deg) / 180.0f)

// radian -> degree
#define RADIAN_DEGREE(_rad) ((_rad) * 180.0f / M_PI)

// ベクトルの構造体
typedef struct _Vector {
	float x, y;
}Vector;

float Vector_Dot(Vector v0, Vector v1);
float Vector_Length(Vector v);
Vector Vector_Normalize(Vector v);

#include <stdio.h>
#include <math.h>

int main(void) {
	Vector va, vb, n;

	puts("ベクトル va の入力");
	printf("va(x, y): ");
	scanf_s("%f %f", &va.x, &va.y);

	printf("ベクトル va(x, y): (%f, %f) の長さ %f\n", va.x, va.y, Vector_Length(va));

	puts("ベクトル vb の入力");
	printf("vb(x, y): ");
	scanf_s("%f %f", &vb.x, &vb.y);

	printf("ベクトル va(x, y): (%f, %f) の長さ %f\n", vb.x, vb.y, Vector_Length(vb));

	//n = Vector_Normalize(va);
	//printf("正規化 (x) %f -> %f\n", va.x, n.x);
	//printf("正規化 (y) %f -> %f\n", va.y, n.y);
	//printf("正規化後のベクトル n(x, y): (%f, %f) の長さ %f\n", n.x, n.y, Vector_Length(n));

	// 内積を算出
	float d = Vector_Dot(Vector_Normalize(va), Vector_Normalize(vb));

	// 結果表示
	printf("dot: %f %f (degree)\n", d, RADIAN_DEGREE(acosf(d)));

	return 0;


};

// ベクトル同士の内積
float Vector_Dot(Vector v0, Vector v1) {
	float r;
	r = (v0.x * v1.x) + (v0.y * v1.y);
	return r;
};

// ベクトルの長さを獲得
float Vector_Length(Vector v) {
	float l = sqrtf(v.x * v.x + v.y * v.y);
	return l;
};

// ベクトルを正規化
Vector Vector_Normalize(Vector v) {
	float l = Vector_Length(v);
	Vector n;
	n.x = v.x / l;
	n.y = v.y / l;
	return n;
};