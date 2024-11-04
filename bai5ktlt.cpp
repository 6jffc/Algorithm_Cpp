#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> map1;
    std::ifstream file1("data1.txt");
    std::string word;
    while (file1 >> word) {
        map1[word]++;
    }
    file1.close();

    std::unordered_map<std::string, int> map2;
    std::ifstream file2("data2.txt");
    while (file2 >> word) {
        map2[word]++;
    }
    file2.close();

    std::ofstream outfile("ketqua.out");
    for (const auto& pair : map1) {
        if (map2.find(pair.first) == map2.end()) {
            outfile << pair.first << " " << pair.second << "\n";
        }
    }
    outfile.close();

    return 0;
}
