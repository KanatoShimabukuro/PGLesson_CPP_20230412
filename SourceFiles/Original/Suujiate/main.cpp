#include <iostream>
#include <cstdlib>
#include <ctime>

bool playAgain() {
    char choice;
    std::cout << "もう一度プレイしますか？ (y/n) : ";
    std::cin >> choice;
    return (choice == 'y' || choice == 'Y');
};

void main() {
    // 乱数の種を設定
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    bool continuePlaying = true;

    while (continuePlaying) {
        // 1から100までのランダムな整数を生成
        int targetNumber = std::rand() % 100 + 1;

        int guess;
        int attempts = 0;

        std::cout << "数字当てゲーム  |  1から100までの中の数字を当ててね  |  Created by kanato224.\n" << std::endl;

        while (true) {
            std::cout << "予想した数字を入力してください：";
            std::cin >> guess;

            attempts++;

            if (guess < targetNumber) {
                std::cout << "もっと大きな数です。\n" << std::endl;
            }
            else if (guess > targetNumber) {
                std::cout << "もっと小さな数です。\n" << std::endl;
            }
            else {
                std::cout << "正解です！（正解までの試行回数：" << attempts << "）\n" << std::endl;
                break;
            };
        };
        
        continuePlaying = playAgain();
        std::cout << std::endl;
    };

    std::cout << "ゲームを終了します。お疲れ様でした！" << std::endl;
};