/* 2�_�Ԃ̋����ƃx�N�g���̐��K��
* GP1-4-8 ���܊��]
*/

#include <stdio.h>
#include <math.h>

// ���W���̍\����
typedef struct _Point {
	float x, y;
}Point;

// �x�N�g���̍\����
typedef struct _Vector {
	float x, y;
}Vector;

float Distance_Line_Segment(Point p0, Point p1);
float Vector_Length(Vector v);
Vector Vector_Normalize(Vector v);

//2�_�Ԃ̋������v�Z
float Distance_Line_Segment(Point p0, Point p1) {
	float dx = p1.x - p0.x;
	float dy = p1.y - p0.y;
	float d = sqrtf(dx * dx + dy * dy);
	return d;
}

//�x�N�g���̒������l��
float Vector_Length(Vector v) {
	float l = sqrtf(v.x * v.x + v.y * v.y);
	return l;
}

//�x�N�g���𐳋K��
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

	puts("--- 2�_��ab�̋������v�Z���� ---");
	printf("�_ a(x, y): ");
	scanf_s("%f %f", &a.x, &a.y);
	printf("�_ a(x, y): (%f, %f)\n", a.x, a.y);
	printf("�_ b(x, y): ");
	scanf_s("%f %f", &b.x, &b.y);
	printf("�_ b(x, y): (%f, %f)\n", b.x, b.y);

	dab = Distance_Line_Segment(a, b);
	printf("2�_�� ab �̋���: %f\n", dab);

	puts("\n--- �x�N�g���̒����Ɛ��K������ ---");
	puts("�x�N�g�� va �̓���");
	printf("va(x, y): ");
	scanf_s("%f %f", &va.x, &va.y);

	printf("�x�N�g�� va(x, y): (%f, %f) �̒��� %f\n", va.x, va.y, Vector_Length(va));

	n = Vector_Normalize(va);
	printf("���K�� (x) %f -> %f\n", va.x, n.x);
	printf("���K�� (y) %f -> %f\n", va.y, n.y);
	printf("���K����̃x�N�g�� n(x, y): (%f, %f) �̒��� %f\n", n.x, n.y, Vector_Length(n));

	return 0;
};