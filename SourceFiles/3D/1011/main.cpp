#include "main.h"

int main(int argc, char* argv[]) {
    SetConsoleOutputCP(65001); // 日本語を使用可能にする

    // 引数にファイルパスが渡されなかった
    if(argc != 2) {
        std::cerr << "Text file path not passed." << std::endl;
        return -1;
    };

    const char* filePath = argv[1];

    // ファイルが開けるか
    std::ifstream file(filePath);
    if(!file.is_open()) {
        std::cerr << "can't open file : " << filePath << std::endl;
        return -1;
    };

    // 連想配列
    std::map<std::string, double> cityAverages;

    // 一行ずつ取得し、計算
    std::string line;
    while(std::getline(file, line)) {
        if(line.empty() || line[0] == '#') continue;

        std::istringstream iss(line);
        std::string city;
        iss >> city;

        if(cityAverages.find(city) == cityAverages.end()) cityAverages[city] = 0.0;

        double sum = 0.0;
        int count = 0;
        double value;

        while(iss >> value) {
            sum += value;
            count++;
        };

        if(count > 0) cityAverages[city] += sum / count;
    };

    file.close();

    // 出力
    for(const auto& pair : cityAverages) {
        std::cout << pair.first << " - average : " << pair.second << std::endl;
    };

    return 0;
};

/*int main() {
    SetConsoleOutputCP(65001);

    std::ifstream file("./SourceFiles/3D/1011/main.txt");
    if (!file.is_open()) {
        std::cerr << "ファイルを開けません" << std::endl;
        return 1;
    }

    std::map<std::string, double> cityAverages;

    std::string line;
    while (std::getline(file, line)) {
        if (line.empty() || line[0] == '#') {
            continue; // 空行またはコメント行を無視
        }

        std::istringstream iss(line);
        std::string city;
        iss >> city;

        if (cityAverages.find(city) == cityAverages.end()) {
            cityAverages[city] = 0.0;
        }

        double sum = 0.0;
        int count = 0;
        double value;

        while (iss >> value) {
            sum += value;
            count++;
        }

        if (count > 0) {
            cityAverages[city] += sum / count;
        }
    }

    file.close();

    for (const auto& pair : cityAverages) {
        std::cout << pair.first << " - average : " << pair.second << std::endl;
    }

    return 0;
};*/



/*int main(void) {

    //SetConsoleOutputCP(65001);

    const char* filename = "./SourceFiles/3D/1011/main.txt";
    FILE* file;

    if (fopen_s(&file, filename, "r") != 0) {
        printf("Cannot open file: %s\n", filename);
        return 1;
    };

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    };

    fclose(file);

    return 0;
};

int main(int argc, char* argv[]) {

    if (argc != 2) {
        // コマンドライン引数の数が正しくない場合、エラーメッセージを表示
        printf("Usage: %s <filename>\n", argv[0]);
        return 1; // エラーコード1を返す
    }

    // ファイル名はargv[1]に格納されている
    char* filename = argv[1];
    FILE* file;

    if (fopen_s(&file, filename, "r") != 0) {
        // ファイルを開けない場合、エラーメッセージを表示
        printf("Cannot open file: %s\n", filename);
        return 1; // エラーコード1を返す
    }

    // ファイルからテキストを読み込む
    char line[100]; // 行の最大長は100文字と仮定
    while (fgets(line, sizeof(line), file) != NULL) {
        // 読み込んだ行を処理する（ここでは単に表示する）
        printf("%s", line);
    }

    // ファイルを閉じる
    fclose(file);

    return 0;
};*/
