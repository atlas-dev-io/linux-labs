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

    ~Cat() { cout << name << " :Destructor" << endl; }
};

int main() {
    // Cat c1;
    // Cat c2("kitty", 5);

    Cat *c3 = new Cat;
    Cat *c4 = new Cat("jett", 2);

    delete c3;
    delete c4;
}
