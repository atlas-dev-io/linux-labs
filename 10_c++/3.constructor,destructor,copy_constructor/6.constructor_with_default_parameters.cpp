#include <iostream>
#include <string>

using namespace std;

class Cat {
  public:
    Cat(const string _name = "miao", const int _age = 5)
        : name(_name), age(_age) {}

    void show() { cout << "name: " << name << " age: " << age << endl; }

  private:
    string name;
    int age;
};

int main() {

    Cat c1;
    c1.show();

    Cat c2("kitty");
    c2.show();

    return 0;
}
