#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

// �f�O���[�\�L -> ���W�A���\�L
#define DEGREE_RADIAN(_deg) (M_PI*(_deg)/180.0f)

// �f�O���[�\�L -> ���W�A���\�L
#define RADIAN_DEGREE(_rad) ((_rad)*180.0f/M_PI)

int main() {

	// float �t�O�p�֐�
	float atan2_f = atan2f(2.0f,1.0f);

	// double �t�O�p�֐�
	double atan2_d = atan2(2.0,1.0);


	printf("%f - %f\n", atan2_f, RADIAN_DEGREE(atan2_f));
	printf("%f - %f\n", atan2_d, RADIAN_DEGREE(atan2_d));

	return 0;
};
