#pragma once

class POS {
	private:
		int x;
		int y;

	public:
		POS(); // コンストラクタのプロトタイプ宣言
		POS(int tmp_x, int tmp_y); // 引数ありの宣言

		void print();
};
