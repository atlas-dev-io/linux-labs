#include <iostream>

using namespace std;

class Cat {
  private:
    int age;

  public:
    Cat(int _age) : age(_age) {}
    int operator+(Cat &other) {
        cout << "Add up the ages." << endl;
        return age + other.age;
    }
};

int main() {
    Cat c1(5);
    Cat c2(7);

    int result = c1 + c2;
    cout << "The result of adding two cats together: " << result << endl;
    return 0;
}
