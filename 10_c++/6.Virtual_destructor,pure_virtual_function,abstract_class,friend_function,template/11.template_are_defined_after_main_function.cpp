#include <iostream>

template <typename T> T add(T a, int b);

int main() {
    int n1 = 45;
    int n2 = 69;
    double n3 = 56.9;
    double n4 = 42.3;

    std::cout << add(n1, n2) << std::endl;
    std::cout << add(n3, n4) << std::endl;
    std::cout << add(n1, n3) << std::endl;
    std::cout << add(n3, n1) << std::endl;

    return 0;
}

template <typename T>

T add(T a, int b) {
    std::cout << "The template function was called(add)." << std::endl;
    return a + b;
}
