/* p.105 ���X�g4.4 ���W�ƃx�N�g���̊e��v�Z����
	Add_Point_Vector() �̂�
*/

#include <stdio.h>

/* ���W�ƃx�N�g���́APoint, Vector �̖��O�œ�������悤�ɂ���K�v���� */
// ���W���̍\����
struct Point {
	float x, y;
};

// �x�N�g���̍\����
struct Vector {
	float x, y;
};

// �֐� Add_Point_Vector
// �i���W�j+�i�x�N�g���j
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
	�_ p0 �̍��W����͂ł���悤�ɂ���
	*/
	printf("�_ p0 �̓���\n");
	printf("p0.x: ");
	scanf_s("%f", &p0.x);
	printf("p0.y: ");
	scanf_s("%f", &p0.y);

	printf("�_ p0(x,y) : (%f, %f)\n", p0.x, p0.y);

	/*
	�x�N�g�� v0 �̍��W����͂ł���悤�ɂ���
	*/
	printf("\n�x�N�g�� v0 �̓���\n");
	printf("v0.x: ");
	scanf_s("%f", &v0.x);
	printf("v0.y: ");
	scanf_s("%f", &v0.y);

	printf("�x�N�g�� v0(x,y) : (%f, %f)\n", v0.x, v0.y);

	// �֐��ֈ����ƌĂяo��
	p1 = Add_Point_Vector(p0, v0);

	// ����
	printf("\n�_ p0(x,y) : (%f, %f) �� �x�N�g�� v0(x,y) : (%f, %f) �ړ��������_�� �_ p1(x,y) : (%f, %f)", p0.x, p0.y, v0.x, v0.y, p1.x, p1.y);

	return 0;
}