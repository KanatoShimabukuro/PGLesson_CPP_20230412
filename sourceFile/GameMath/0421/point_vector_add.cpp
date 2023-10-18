/* p.105 リスト4.4 座標とベクトルの各種計算から
	Add_Point_Vector() のみ
*/

#include <stdio.h>

/* 座標とベクトルは、Point, Vector の名前で動かせるようにする必要あり */
// 座標情報の構造体
struct Point {
	float x, y;
};

// ベクトルの構造体
struct Vector {
	float x, y;
};

// 関数 Add_Point_Vector
// （座標）+（ベクトル）
Point Add_Point_Vector(Point p, Vector v) {
	Point r;
	r.x = p.x + v.x;
	r.y = p.y + v.y;
	return r;
}

int main(void) {
	Point p0, p1;
	Vector v0;

	/*
	点 p0 の座標を入力できるようにする
	*/
	printf("点 p0 の入力\n");
	printf("p0.x: ");
	scanf_s("%f", &p0.x);
	printf("p0.y: ");
	scanf_s("%f", &p0.y);

	printf("点 p0(x,y) : (%f, %f)\n", p0.x, p0.y);

	/*
	ベクトル v0 の座標を入力できるようにする
	*/
	printf("\nベクトル v0 の入力\n");
	printf("v0.x: ");
	scanf_s("%f", &v0.x);
	printf("v0.y: ");
	scanf_s("%f", &v0.y);

	printf("ベクトル v0(x,y) : (%f, %f)\n", v0.x, v0.y);

	// 関数へ引数と呼び出し
	p1 = Add_Point_Vector(p0, v0);

	// 結果
	printf("\n点 p0(x,y) : (%f, %f) を ベクトル v0(x,y) : (%f, %f) 移動させた点は 点 p1(x,y) : (%f, %f)", p0.x, p0.y, v0.x, v0.y, p1.x, p1.y);

	return 0;
}