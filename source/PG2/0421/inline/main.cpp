#include <Windows.h>
#include <stdio.h>

#define USE_INLINE
#ifdef USE_INLINE // インラインを無効にしてもコンパイラが自動で有効・無効化をやってくれる

inline unsigned int Pow(int x1, int x2) {
	return (x1 * x2);
}

#else

unsigned int Pow(int x1, int x2) {
	return (x1 * x2);
}

#endif


int main(void) {
	LARGE_INTEGER f;
	if (!QueryPerformanceFrequency(&f)) {
		return -1;
	}

	LARGE_INTEGER s, e;

	QueryPerformanceCounter(&s);

	unsigned int pow = 0;

	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < 10000; j++) {
			pow = Pow(i, j);
		}
	}

	printf("pow : %d\n", pow);
	QueryPerformanceCounter(&e);
	double t = (double)(e.QuadPart - s.QuadPart) / f.QuadPart;
	printf("time : %f sec\n", t);

	return 0;
};
