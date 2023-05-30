#include <stdio.h>
#include "SceneManager.h"
#include "TitleScene.h"

int main() {
	SceneManager sceneMng(dynamic_cast<AbstractScene*>(new Title())); // シーンマネージャーのオブジェクト作成

	printf("整数値を入力 > ");
	while (sceneMng.Update() != nullptr) { // nullptr はポインタ界の NULL。 念のためでなることは無い
		sceneMng.Draw();
	};

	printf("処理を終了します。\n");

	return 0;
};
