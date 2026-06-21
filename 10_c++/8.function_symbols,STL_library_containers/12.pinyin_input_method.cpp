
#include <cstring>
#include <fstream>
#include <iostream>
#include <istream>
#include <limits>
#include <map>
#include <string>

void read_a_line(std::istream &file, std::map<std::string, std::string> &map) {

    std::string line_data;

    // 1.read a line of data
    while (std::getline(file, line_data)) {

        auto pos1 = line_data.find("=>");
        auto pos2 = line_data.find("\"");

        // 4.Store in a map container
        map.insert({// 2.get key
                    line_data.substr(0, pos1),
                    // 3.get value
                    line_data.substr(pos2 + 1, line_data.length() - pos2 - 3)});
    }
}

int main() {

    // 1.open file
    std::ifstream file("file");
    if (!file.is_open()) {
        std::cerr << "Unable to open file" << std::endl;
        exit(EXIT_FAILURE);
    }

    // 2.data is processed row by row and stored in map1
    std::map<std::string, std::string> map1;
    read_a_line(file, map1);

    while (1) {
        // 3.input Pinyin
        std::string input_buffer;
        std::cout << "Please enter the pinyin:" << std::endl;
        std::cin >> input_buffer;

        // 4.match key-value pairs
        auto it = map1.find(input_buffer);
        if (it != map1.end()) {

            std::cout << it->second << std::endl;
        } else {
            std::cout
                << "The pinyin you entered is incorrect, please re-enter it."
                << std::endl;
        }

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return 0;
}
