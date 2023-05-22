#include "person.h"

int main() {

	char str[5] = "taro";
	Person person(str, 21); // コンストラクタ呼び出し

	person.Show();

	return 0;
};
