#include <iostream>
#include <string>

using namespace std;

class Cat {
  public:
    Cat(string _name, int _age) {
        name = _name;
        age = _age;
    }

    void show() { cout << "name: " << name << " age: " << age << endl; }

  private:
    string name;
    int age;
};

int main() {
    // stack space
    Cat c1("lucky", 5);

    // heap space
    Cat *c2 = new Cat("jack", 6);

    c1.show();
    c2->show();

    delete c2;

    return 0;
}
