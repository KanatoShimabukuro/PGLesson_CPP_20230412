#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

// デグリー表記 -> ラジアン表記
#define DEGREE_RADIAN(_deg) (M_PI*(_deg)/180.0f)

// デグリー表記 -> ラジアン表記
#define RADIAN_DEGREE(_rad) ((_rad)*180.0f/M_PI)

int main() {

	// float 三角関数
	float asin_f = asinf(0.5f);
	float acos_f = acosf(0.5f);
	float atan_f = atanf(0.5f);

	// double 三角関数
	double asin_d = asin(0.5);
	double acos_d = acos(0.5);
	double atan_d = atan(0.5);


	printf("%f - %f\n", asin_f, RADIAN_DEGREE(asin_f));
	printf("%f - %f\n", acos_f, RADIAN_DEGREE(acos_f));
	printf("%f - %f\n", atan_f, RADIAN_DEGREE(atan_f));

	printf("%f - %f\n", asin_d, RADIAN_DEGREE(asin_d));
	printf("%f - %f\n", acos_d, RADIAN_DEGREE(acos_d));
	printf("%f - %f\n", atan_d, RADIAN_DEGREE(atan_d));

	return 0;
};
