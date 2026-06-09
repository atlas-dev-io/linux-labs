#include <iostream>
#include <string>

using namespace std;

class Cat {
  public:
    Cat(const string _name = "miao", const int _age = 5);
    void show();

  private:
    string name;
    int age;
};

Cat::Cat(const string _name, const int _age) : name(_name), age(_age) {}

void Cat::show() { cout << "name: " << name << " age: " << age << endl; }

int main() {

    Cat c1;
    c1.show();

    Cat c2("kitty");
    c2.show();

    return 0;
}
