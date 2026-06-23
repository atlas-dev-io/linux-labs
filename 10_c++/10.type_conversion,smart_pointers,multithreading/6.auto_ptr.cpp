#include <iostream>
#include <memory>

int main() {
    std::auto_ptr<int> p1(new int);

    *p1 = 45;
    std::cout << "p1[0] = " << *p1 << std::endl;
}
