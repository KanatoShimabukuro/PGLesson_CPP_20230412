#include <stdio.h>
#include "POS.h" // �t�@�C�����ƃN���X���͓����ɁE�Öك��[��

int main(void) {

	POS pos; // POS.h �� POS �N���X�Œ�`���ꂽ�ϐ��i���̐݌v�}�j�� main.cpp �̃I�u�W�F�N�g�ϐ� pos �ɓK�p
	pos.x = 100.0; // �N���X POS �ŁA�I�u�W�F�N�g pos �ɓK�p���ꂽ�ϐ� x �ɒl����
	pos.y = 200.0; // �N���X POS �ŁA�I�u�W�F�N�g pos �ɓK�p���ꂽ�ϐ� y �ɒl����
	/*
	* �֐����Fprint
	* �����F�Ȃ�
	* �������e�F�����o�ϐ�x,y����ʕ\��
	*/
	pos.print();
	//printf("x : %lf y : %lf\n", pos.x, pos.y);

	POS pos2; // POS.h �� POS �N���X�Œ�`���ꂽ�ϐ��i���̐݌v�}�j�� main.cpp �̃I�u�W�F�N�g�ϐ� pos �ɓK�p
	pos2.x = 150.0; // �N���X POS �ŁA�I�u�W�F�N�g pos �ɓK�p���ꂽ�ϐ� x �ɒl����
	pos2.y = 210.0; // �N���X POS �ŁA�I�u�W�F�N�g pos �ɓK�p���ꂽ�ϐ� y �ɒl����

	pos2.print();

	return 0;
};
