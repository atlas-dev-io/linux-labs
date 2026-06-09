#include <iostream>
#include <string>

using namespace std;

class Cat {
  private:
    string name;
    int age;

  public:
    Cat() { cout << name << ":Parameterless construction" << endl; }
    Cat(const string _name, const int _age) : name(_name), age(_age) {
        cout << name << ":Constructors with string and int" << endl;
    }
};

int main() {
    Cat c1;
    // Cat c2();

    Cat *c3 = new Cat;
    Cat *c4 = new Cat();

    delete c3;
    delete c4;

    Cat c5 = Cat("kitty", 5);

    Cat c6;
    c6 = Cat("hello", 7);

    Cat c7 = {"miao", 2};
    Cat c8{"dudu", 4};
}
