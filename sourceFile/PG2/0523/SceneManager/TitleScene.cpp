#include <stdio.h>
#include "TitleScene.h"
#include "GameMainScene.h"

AbstractScene* Title::Update() { // ここで値の更新など、処理
	int nInt;

	scanf_s("%d", &nInt);

	if (nInt == 1) {
		return new GameMain(); // ゲームメインへ推移
	};

	return this; // シーン継続
};

void Title::Draw() const { // やることは描画のみ、絶対に値の更新はしない
	printf("Titleです。\n");
	printf("整数値を入力 > ");
};