#include <stdio.h>
#include <math.h>

// sec -> frame
#define SECOND_TO_FRAME(_sec) ((_sec) * 60)

// min -> frame
#define MINUTE_TO_FRAME(_min) (SECOND_TO_FRAME((_min) * 60))

// hour -> frame
#define HOUR_TO_FRAME(_hour) (MINUTE_TO_FRAME((_hour) * 60))

// frame -> sec
#define FRAME_TO_SECOND(_frame) ((_frame) / SECOND_TO_FRAME(1))

// frame -> min
#define FRAME_TO_MINUTE(_frame) ((_frame) / MINUTE_TO_FRAME(1))

// frame -> hour
#define FRAME_TO_HOUR(_frame) ((_frame) / HOUR_TO_FRAME(1))

void main() {

	int sec = 20;
	printf("%d sec -> %d frame -> %d sec\n", sec, SECOND_TO_FRAME(sec), FRAME_TO_SECOND(SECOND_TO_FRAME(sec)));

};
