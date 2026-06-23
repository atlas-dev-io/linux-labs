#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> p1(new int);

    *p1 = 445655;
    std::cout << "p1[0] = " << *p1 << std::endl;
}
