#include <iostream>
#include <string>
#include <chrono>
#include <thread>

int main() {
    std::string word;
    int count;

    std::cout << "�J�E���g�_�E�����[�h�Q�[�����J�n���܂��B" << std::endl;
    std::cout << "�P�����͂��Ă�������: ";
    std::cin >> word;

    std::cout << "�J�n�܂�3�b�J�E���g�_�E�����܂�..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "3..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "2..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "�X�^�[�g�I" << std::endl;

    count = word.length();

    while (count > 0) {
        std::cout << count << "..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        count--;
    }

    std::cout << "���Ԑ؂�I" << std::endl;

    return 0;
}