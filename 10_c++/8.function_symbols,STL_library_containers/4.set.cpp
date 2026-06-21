#include <iostream>
#include <set>

int main() {
    std::set<int> s1;
    s1.insert(10);
    s1.insert(117);
    s1.insert(10);
    s1.insert(12);
    s1.insert(10);
    s1.insert(10);
    s1.insert(138);
    s1.insert(14);
    s1.insert(36);
    s1.insert(5);

    for (int x : s1) {
        std::cout << x << "  ";
    }
    std::cout << std::endl;
    return 0;
}
