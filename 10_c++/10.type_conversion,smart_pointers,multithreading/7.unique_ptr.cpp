#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int[]> p1(new int(10));
    std::unique_ptr<int> p2(new int);

    p1[0] = 45;
    p1[5] = 148;
    std::cout << "p1[0] = " << p1[0] << std::endl;
    std::cout << "p1[5] = " << p1[5] << std::endl;

    *p2 = 456;
    std::cout << "*p2 = " << *p2 << std::endl;
}
