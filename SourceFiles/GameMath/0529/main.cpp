/* ���X�g5.6, 5.7�� ���ς̊֐��̗��p
* 2-4 ���܊��]
*/

#define _USE_MATH_DEFINES

// degree -> radian
#define DEGREE_RADIAN(_deg) (M_PI * (_deg) / 180.0f)

// radian -> degree
#define RADIAN_DEGREE(_rad) ((_rad) * 180.0f / M_PI)

// �x�N�g���̍\����
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

	puts("�x�N�g�� va �̓���");
	printf("va(x, y): ");
	scanf_s("%f %f", &va.x, &va.y);

	printf("�x�N�g�� va(x, y): (%f, %f) �̒��� %f\n", va.x, va.y, Vector_Length(va));

	puts("�x�N�g�� vb �̓���");
	printf("vb(x, y): ");
	scanf_s("%f %f", &vb.x, &vb.y);

	printf("�x�N�g�� va(x, y): (%f, %f) �̒��� %f\n", vb.x, vb.y, Vector_Length(vb));

	//n = Vector_Normalize(va);
	//printf("���K�� (x) %f -> %f\n", va.x, n.x);
	//printf("���K�� (y) %f -> %f\n", va.y, n.y);
	//printf("���K����̃x�N�g�� n(x, y): (%f, %f) �̒��� %f\n", n.x, n.y, Vector_Length(n));

	// ���ς��Z�o
	float d = Vector_Dot(Vector_Normalize(va), Vector_Normalize(vb));

	// ���ʕ\��
	printf("dot: %f %f (degree)\n", d, RADIAN_DEGREE(acosf(d)));

	return 0;


};

// �x�N�g�����m�̓���
float Vector_Dot(Vector v0, Vector v1) {
	float r;
	r = (v0.x * v1.x) + (v0.y * v1.y);
	return r;
};

// �x�N�g���̒������l��
float Vector_Length(Vector v) {
	float l = sqrtf(v.x * v.x + v.y * v.y);
	return l;
};

// �x�N�g���𐳋K��
Vector Vector_Normalize(Vector v) {
	float l = Vector_Length(v);
	Vector n;
	n.x = v.x / l;
	n.y = v.y / l;
	return n;
};