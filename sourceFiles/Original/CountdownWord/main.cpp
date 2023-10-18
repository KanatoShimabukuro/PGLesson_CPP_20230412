#include <iostream>
#include <string>
#include <chrono>
#include <thread>

int main() {
    std::string word;
    int count;

    std::cout << "カウントダウンワードゲームを開始します。" << std::endl;
    std::cout << "単語を入力してください: ";
    std::cin >> word;

    std::cout << "開始まで3秒カウントダウンします..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "3..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "2..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "スタート！" << std::endl;

    count = word.length();

    while (count > 0) {
        std::cout << count << "..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        count--;
    }

    std::cout << "時間切れ！" << std::endl;

    return 0;
}