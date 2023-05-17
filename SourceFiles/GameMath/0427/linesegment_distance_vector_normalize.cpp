/* 2点間の距離とベクトルの正規化
* GP1-4-8 島袋叶望
*/

#include <stdio.h>
#include <math.h>

// 座標情報の構造体
typedef struct _Point {
	float x, y;
}Point;

// ベクトルの構造体
typedef struct _Vector {
	float x, y;
}Vector;

float Distance_Line_Segment(Point p0, Point p1);
float Vector_Length(Vector v);
Vector Vector_Normalize(Vector v);

//2点間の距離を計算
float Distance_Line_Segment(Point p0, Point p1) {
	float dx = p1.x - p0.x;
	float dy = p1.y - p0.y;
	float d = sqrtf(dx * dx + dy * dy);
	return d;
}

//ベクトルの長さを獲得
float Vector_Length(Vector v) {
	float l = sqrtf(v.x * v.x + v.y * v.y);
	return l;
}

//ベクトルを正規化
Vector Vector_Normalize(Vector v) {
	float l = Vector_Length(v);
	Vector n;
	n.x = v.x / l;
	n.y = v.y / l;
	return n;
}


int main(void) {
	Point a, b;
	float dab;
	Vector va, n;

	puts("--- 2点間abの距離を計算する ---");
	printf("点 a(x, y): ");
	scanf_s("%f %f", &a.x, &a.y);
	printf("点 a(x, y): (%f, %f)\n", a.x, a.y);
	printf("点 b(x, y): ");
	scanf_s("%f %f", &b.x, &b.y);
	printf("点 b(x, y): (%f, %f)\n", b.x, b.y);

	dab = Distance_Line_Segment(a, b);
	printf("2点間 ab の距離: %f\n", dab);

	puts("\n--- ベクトルの長さと正規化処理 ---");
	puts("ベクトル va の入力");
	printf("va(x, y): ");
	scanf_s("%f %f", &va.x, &va.y);

	printf("ベクトル va(x, y): (%f, %f) の長さ %f\n", va.x, va.y, Vector_Length(va));

	n = Vector_Normalize(va);
	printf("正規化 (x) %f -> %f\n", va.x, n.x);
	printf("正規化 (y) %f -> %f\n", va.y, n.y);
	printf("正規化後のベクトル n(x, y): (%f, %f) の長さ %f\n", n.x, n.y, Vector_Length(n));

	return 0;
};