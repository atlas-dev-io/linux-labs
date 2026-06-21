#include <iostream>
#include <list>

bool fun(int &n) {
    std::cout << n;
    std::cout << std::endl;

    if (n % 2 == 1)
        return true;
    else
        return false;
}

class Test {
  public:
    bool operator()(int &n) {
        if (n % 2 == 0)
            return true;
        else
            return false;
    }
};

int main() {
    std::list<int> l1 = {45, 78, 445, 548, 55, 44555};
    Test t1;
    // l1.remove_if(fun);
    l1.remove_if(t1);
    std::cout << "==========================" << std::endl;
    for (int x : l1)
        std::cout << x << "  ";
    std::cout << std::endl;
}
