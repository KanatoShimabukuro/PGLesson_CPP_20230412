#include <stdio.h>

int main() {
	while (true) {
		try {
			int type;
			printf("ì¸óÕ > ");
			scanf_s("%d", &type);

			if (type == 0) {
				return 0;
			}
			else if (type == 1) {
				throw 1;
			}
			else {
				throw "ó·äOî≠ê∂";
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
