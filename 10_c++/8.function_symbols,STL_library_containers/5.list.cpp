#include <iostream>
#include <list>

int main() {
    std::list<int> l1 = {14, 78, 96, 4};
    std::list<int> l2 = {145, 781, 196, 49};

    // l1.remove(45);
    // l1.merge(l2);
    l1.sort([](const int &n1, const int &n2) { return n1 > n2; });

    for (int x : l1) {
        std::cout << x << "  ";
    }
    std::cout << std::endl;
    return 0;
}
