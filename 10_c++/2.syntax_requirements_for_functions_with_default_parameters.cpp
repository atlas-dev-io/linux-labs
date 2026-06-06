#include <iostream>

/*
 *  When a function has default parameters,
 *  the default values of the parameters must be
 *  consecutive from right to left without any breaks
 *  when the developer encapsulates the function.
 */

void fun(int n1 = 888, float n2 = 99.9, const char *n3 = "hello") {
    std::cout << "The parameters are as follows:" << n1 << " " << n2 << " "
              << n3 << std::endl;
}

//  Correct way to write
void fun2(int n1, float n2 = 99.9, const char *n3 = "hello") {
    std::cout << "The parameters are as follows:" << n1 << " " << n2 << " "
              << n3 << std::endl;
}

// Incorrect writing
//  void fun1(int n1, float n2 = 99.9,const char *n3){}

int main() {
    fun2(1000);

    return 0;
}
