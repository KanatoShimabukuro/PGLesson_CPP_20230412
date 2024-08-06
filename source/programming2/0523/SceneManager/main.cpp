#include <stdio.h>
#include "SceneManager.h"
#include "TitleScene.h"

int main() {
	SceneManager sceneMng(dynamic_cast<AbstractScene*>(new Title())); // �V�[���}�l�[�W���[�̃I�u�W�F�N�g�쐬

	printf("�����l����� > ");
	while (sceneMng.Update() != nullptr) { // nullptr �̓|�C���^�E�� NULL�B �O�̂��߂łȂ邱�Ƃ͖���
		sceneMng.Draw();
	};

	printf("�������I�����܂��B\n");

	return 0;
};
