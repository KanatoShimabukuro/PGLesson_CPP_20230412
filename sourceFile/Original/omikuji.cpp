#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

std::string getFortune() {
    std::vector<std::string> fortunes = {
        "��g",
        "���g",
        "���g",
        "�g",
        "��",
        "�勥"
    };

    // ���݂̎������V�[�h�Ƃ��ė����𐶐�
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // �������g���ă����_���Ȃ��݂������ʂ�I��
    int index = std::rand() % fortunes.size();
    return fortunes[index];
}

int main() {
    std::cout << "���݂����������܂��I" << std::endl;

    // ���݂����̌��ʂ��擾
    std::string result = getFortune();

    // ���ʂ�\��
    std::cout << "����: " << result << std::endl;

    return 0;
}