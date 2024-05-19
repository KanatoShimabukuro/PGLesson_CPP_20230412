#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

// デグリー表記 -> ラジアン表記
#define DEGREE_RADIAN(_deg) (M_PI*(_deg)/180.0f)

int main() {

	// float 三角関数
	float rad_f = DEGREE_RADIAN(45.0f);
	float sin_f = sinf(rad_f);
	float cos_f = cosf(rad_f);
	float tan_f = tanf(rad_f);

	// double 三角関数
	double rad_d = DEGREE_RADIAN(45.0);
	double sin_d = sin(rad_d);
	double cos_d = cos(rad_d);
	double tan_d = tan(rad_d);


	printf("%f\n", sin_f);
	printf("%f\n", cos_f);
	printf("%f\n", tan_f);

	printf("%f\n", sin_d);
	printf("%f\n", cos_d);
	printf("%f\n", tan_d);

	return 0;
};
