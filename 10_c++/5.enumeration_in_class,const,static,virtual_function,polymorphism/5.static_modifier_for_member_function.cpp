#include <iostream>

using namespace std;

class Cat {
  private:
    int age;
    static int n;

  public:
    Cat(int _age) : age(_age) {
        n++;
        cout << "The current number of cats created is " << n << endl;
    }

    void fun1() { cout << "Non-static member functions" << endl; }
    static void fun2() { cout << "Static member functions" << endl; }
};

int Cat::n = 0;

int main() {
    Cat::fun2();

    Cat c1(2);
    c1.fun2();
    return 0;
}
