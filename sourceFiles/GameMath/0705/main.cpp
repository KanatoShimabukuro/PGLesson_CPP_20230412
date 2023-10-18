#include <stdio.h>

int timeTransform(int inputMode, int inputTime, int outputMode) {
    int outputTime = 0;

    if (inputMode == outputMode) {
        // 入力モードと出力モードが同じ場合、入力時間をそのまま出力時間とする
        outputTime = inputTime;
    }
    else {
        // 異なるモードの場合は変換を行う
        if (inputMode == 1 && outputMode == 2) {
            // HourからMinuteへの変換
            outputTime = inputTime * 60;
        }
        else if (inputMode == 1 && outputMode == 3) {
            // HourからSecondへの変換
            outputTime = inputTime * 3600;
        }
        else if (inputMode == 2 && outputMode == 1) {
            // MinuteからHourへの変換
            outputTime = inputTime / 60;
        }
        else if (inputMode == 2 && outputMode == 3) {
            // MinuteからSecondへの変換
            outputTime = inputTime * 60;
        }
        else if (inputMode == 3 && outputMode == 1) {
            // SecondからHourへの変換
            outputTime = inputTime / 3600;
        }
        else if (inputMode == 3 && outputMode == 2) {
            // SecondからMinuteへの変換
            outputTime = inputTime / 60;
        };
    };

    return outputTime;
};

bool getTime() {
	int inputMode, inputTime;
	printf("時間変換｜0:終わる｜1:Hour｜2:Minute｜3:Secound\n");

	printf("変換前の時間を選択：");
	scanf_s("%d", &inputMode);

    if (inputMode == 0) return false;

	printf("変換前の時間：");
	scanf_s("%d", &inputTime);

	printf("\n変換後の時間（時）：%d\n", timeTransform(inputMode, inputTime, 1));
    printf("変換後の時間（分）：%d\n", timeTransform(inputMode, inputTime, 2));
    printf("変換後の時間（秒）：%d\n\n", timeTransform(inputMode, inputTime, 3));

    return true;
};

void main() {
    while(getTime());
};
