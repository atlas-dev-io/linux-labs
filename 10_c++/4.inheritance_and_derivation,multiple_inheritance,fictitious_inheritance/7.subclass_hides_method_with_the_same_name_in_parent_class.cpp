#include <iostream>

using namespace std;

class Animal {
  public:
    void eat() { cout << "Animal eating" << endl; }
};

class Cat : public Animal {
  public:
    void eat() { cout << "Cat is eatting fish" << endl; }
    void eat(string food) { cout << "Cat is eatting: " << food << endl; }
};

int main() {
    Cat c1;
    c1.eat();
    c1.eat("water");
    return 0;
}
