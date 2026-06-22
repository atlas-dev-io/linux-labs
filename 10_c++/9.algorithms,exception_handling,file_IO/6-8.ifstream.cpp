#include <fstream>
#include <iostream>

int main() {
    std::ifstream in;

    in.open("./1.txt");
    if (!in.is_open()) {
        std::cout << "Open file failed" << std::endl;
        return -1;
    }

    in.get();
}
