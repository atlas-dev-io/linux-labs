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
};

int Cat::n = 0;

int main() {
    Cat c1(5);
    Cat c2(3);
    Cat c3(4);
    return 0;
}
