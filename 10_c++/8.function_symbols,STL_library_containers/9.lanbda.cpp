#include <iostream>
#include <list>

int main() {
    std::list<int> l1 = {45, 78, 445, 548, 55, 44555};

    l1.remove_if([](int &n) { return n % 2 == 1; });

    std::cout << "==========================" << std::endl;

    for (int x : l1)
        std::cout << x << "  ";
    std::cout << std::endl;
    return 0;
}
