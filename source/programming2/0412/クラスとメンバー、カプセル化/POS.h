#pragma once

class POS {
	// アクセス指定子（3種類存在）
	public:

		// メンバー
		double x;
		double y;

		// メンバー関数（メソッド）のプロトタイプ宣言
		void print();
};

// メンバー関数（メソッド）の定義と処理
// :: はスコープ演算子
void POS::print() {
	printf("x : %lf y : %lf\n", x, y);
};