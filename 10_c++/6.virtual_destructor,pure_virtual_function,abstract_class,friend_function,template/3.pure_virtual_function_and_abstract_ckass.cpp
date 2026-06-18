#include <iostream>
#include <sys/types.h>

using namespace std;

class Base {
  public:
    virtual void compare() = 0;
    virtual void show() = 0;
};

class Cat : public Base {
  public:
    void compare() { cout << "age" << endl; }
};

class Dog : public Base {
  public:
    void compare() { cout << "weight" << endl; }
    void show() { cout << "dog show" << endl; }
};

int main() {
    // Cat c1;
    Dog d1;
    return 0;
}
