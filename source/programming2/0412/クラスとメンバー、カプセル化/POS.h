#pragma once

class POS {
	// �A�N�Z�X�w��q�i3��ޑ��݁j
	public:

		// �����o�[
		double x;
		double y;

		// �����o�[�֐��i���\�b�h�j�̃v���g�^�C�v�錾
		void print();
};

// �����o�[�֐��i���\�b�h�j�̒�`�Ə���
// :: �̓X�R�[�v���Z�q
void POS::print() {
	printf("x : %lf y : %lf\n", x, y);
};