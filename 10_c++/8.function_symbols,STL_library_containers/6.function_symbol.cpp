#include <iostream>

using namespace std;

class Test {
  public:
    bool operator()(int n) {
        cout << "Overloaded parentheses, parameter: " << n << endl;
        return true;
    }
};

int main() {
    Test fun;
    fun(666);
    return 0;
}
