#include <exception>
#include <iostream>

int fun1(int n) {
    if (n >= 0 && n <= 10)
        return 0;
    else if (n > 10 && n < 100)
        throw 4.44;
    else if (n >= 100 && n <= 1000)
        throw "The data is too large";
    else
        throw -1;
}

int fun2(int n) noexcept {
    if (n >= 0 && n <= 10)
        return 0;
    else
        return -1;
}

int main() {

    try {
        fun2(12);

    } catch (int n) {
        std::cout << "Throw a custom exception, exception: " << std::endl;
        return -1;
    }

    return 0;
}
