#include <iostream>
#include <cstdlib>
#include <ctime>

bool playAgain() {
    char choice;
    std::cout << "������x�v���C���܂����H (y/n) : ";
    std::cin >> choice;
    return (choice == 'y' || choice == 'Y');
};

void main() {
    // �����̎��ݒ�
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    bool continuePlaying = true;

    while (continuePlaying) {
        // 1����100�܂ł̃����_���Ȑ����𐶐�
        int targetNumber = std::rand() % 100 + 1;

        int guess;
        int attempts = 0;

        std::cout << "�������ăQ�[��  |  1����100�܂ł̒��̐����𓖂ĂĂ�  |  Created by kanato224.\n" << std::endl;

        while (true) {
            std::cout << "�\�z������������͂��Ă��������F";
            std::cin >> guess;

            attempts++;

            if (guess < targetNumber) {
                std::cout << "�����Ƒ傫�Ȑ��ł��B\n" << std::endl;
            }
            else if (guess > targetNumber) {
                std::cout << "�����Ə����Ȑ��ł��B\n" << std::endl;
            }
            else {
                std::cout << "�����ł��I�i�����܂ł̎��s�񐔁F" << attempts << "�j\n" << std::endl;
                break;
            };
        };
        
        continuePlaying = playAgain();
        std::cout << std::endl;
    };

    std::cout << "�Q�[�����I�����܂��B�����l�ł����I" << std::endl;
};