#include <stdio.h>
#include "TitleScene.h"
#include "GameMainScene.h"

AbstractScene* Title::Update() { // �����Œl�̍X�V�ȂǁA����
	int nInt;

	scanf_s("%d", &nInt);

	if (nInt == 1) {
		return new GameMain(); // �Q�[�����C���֐���
	};

	return this; // �V�[���p��
};

void Title::Draw() const { // ��邱�Ƃ͕`��̂݁A��΂ɒl�̍X�V�͂��Ȃ�
	printf("Title�ł��B\n");
	printf("�����l����� > ");
};