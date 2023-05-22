#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

std::string getFortune() {
    std::vector<std::string> fortunes = {
        "大吉",
        "中吉",
        "小吉",
        "吉",
        "凶",
        "大凶"
    };

    // 現在の時刻をシードとして乱数を生成
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // 乱数を使ってランダムなおみくじ結果を選択
    int index = std::rand() % fortunes.size();
    return fortunes[index];
}

int main() {
    std::cout << "おみくじを引きます！" << std::endl;

    // おみくじの結果を取得
    std::string result = getFortune();

    // 結果を表示
    std::cout << "結果: " << result << std::endl;

    return 0;
}