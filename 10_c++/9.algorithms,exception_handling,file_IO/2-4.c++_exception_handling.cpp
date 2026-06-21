#include <exception>
#include <iostream>

class Myerr : public std::exception {
  public:
    const char *what() const throw() {
        std::cout << "Function call failed " << std::endl;
        return "Failed";
    }
};
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

int fun2(int n) {
    Myerr err;
    if (n >= 0 && n <= 10)
        return 0;
    else
        throw err;
}

int main() {

    // try {
    //     fun(999);
    // } catch (int &n) {
    //     std::cout << "Function call failed, exception data:" << n <<
    //     std::endl; return -1;
    // } catch (double &n) {
    //     std::cout << "Function call failed, exception data:" << n <<
    //     std::endl; return -1;
    // } catch (const char *n) {
    //     std::cout << "Function call failed, exception data:" << n <<
    //     std::endl; return -1;
    // }

    try {
        fun2(12);

    } catch (Myerr &n) {
        std::cout << "Throw a custom exception, exception: " << std::endl;
        n.what();
        return -1;
    }

    return 0;
}
