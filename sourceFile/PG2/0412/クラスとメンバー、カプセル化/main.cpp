#include <stdio.h>
#include "POS.h" // ファイル名とクラス名は同じに・暗黙ルール

int main(void) {

	POS pos; // POS.h の POS クラスで定義された変数（箱の設計図）を main.cpp のオブジェクト変数 pos に適用
	pos.x = 100.0; // クラス POS で、オブジェクト pos に適用された変数 x に値を代入
	pos.y = 200.0; // クラス POS で、オブジェクト pos に適用された変数 y に値を代入
	/*
	* 関数名：print
	* 引数：なし
	* 処理内容：メンバ変数x,yを画面表示
	*/
	pos.print();
	//printf("x : %lf y : %lf\n", pos.x, pos.y);

	POS pos2; // POS.h の POS クラスで定義された変数（箱の設計図）を main.cpp のオブジェクト変数 pos に適用
	pos2.x = 150.0; // クラス POS で、オブジェクト pos に適用された変数 x に値を代入
	pos2.y = 210.0; // クラス POS で、オブジェクト pos に適用された変数 y に値を代入

	pos2.print();

	return 0;
};
