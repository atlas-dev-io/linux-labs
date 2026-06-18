#include <iostream>

using namespace std;

class Animal {
  public:
    void eat() { cout << "Animal eating" << endl; }
    void run() { cout << "Animal running" << endl; }
};

class Cat : public Animal {};

int main() {
    Cat c1;
    c1.eat();
    c1.run();
    return 0;
}
