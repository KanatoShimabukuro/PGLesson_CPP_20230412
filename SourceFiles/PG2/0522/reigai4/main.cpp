#include <stdio.h>

int main() {
	while (true) {
		try {
			int type;
			printf("���� > ");
			scanf_s("%d", &type);

			if (type == 0) {
				return 0;
			}
			else if (type == 1) {
				throw 1;
			}
			else {
				throw "��O����";
			};
		}
		catch (int fError) {
			printf("%d\n", fError);
		}
		catch (char* pszError) {
			printf("%s\n", pszError);
		};
	};

	return 0;
};
