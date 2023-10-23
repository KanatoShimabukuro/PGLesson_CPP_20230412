//////////////////////////////////////////////////
// OBJファイルXYZ座標の最大値最小値を抽出する
// 作成：島袋叶望
//////////////////////////////////////////////////
#include "main.h"

int main(int argc, char* argv[]) {
    SetConsoleOutputCP(CP_UTF8); // 日本語を使用可能にする

    //////////////////////////////////////////////////

    // 引数にファイルパスが渡されなかった
    if(argc != 2) {
        std::cerr << "file path not passed." << std::endl;
        return -1;
    };

    const char* filePath = argv[1];

    // ファイルが開けるか
    std::ifstream file(filePath);
    if(!file.is_open()) {
        std::cerr << "can't open file: " << filePath << std::endl;
        return -1;
    };

    //////////////////////////////////////////////////

    // XYZの最大値と最小値
    std::map<std::string, double> max;
    std::map<std::string, double> min;

    std::string line;

    while(std::getline(file, line)) {
        if(line.empty() || line[0] == '#') continue;

        std::istringstream iss(line); // 行からデータをロード

        std::string key;
        double x = 0,
               y = 0,
               z = 0;
        iss >> key >> x >> y >> z;

        if (key == "v" || key == "vn" || key == "vt") {
            if (max["x"] < x) max["x"] = x;
            if (min["x"] > x) min["x"] = x;

            if (max["y"] < y) max["y"] = y;
            if (min["y"] > y) min["y"] = y;

            if (key != "vt") {
                if (max["z"] < z) max["z"] = z;
                if (min["z"] > z) min["z"] = z;
            };
        }
        else {
            continue;
        };
    };

    file.close();

    //////////////////////////////////////////////////

    // 出力
    printf("%f < X < %f\n%f < Y < %f\n%f < Z < %f", min["x"], max["x"], min["y"], max["y"], min["z"], max["z"]);

    return 0;
};