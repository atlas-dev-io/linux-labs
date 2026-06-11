#include <iostream>
#include <string>

class Cat {
  private:
    const std::string name;
    const int age;

  public:
    Cat(const Cat &other) : name(other.name), age(other.age) {
        std::cout << "Copy constructor" << std::endl;
    }
    Cat(const std::string _name, const int _age) : name(_name), age(_age) {
        std::cout << "Constructor" << std::endl;
    }
};

int main() {
    Cat c1("kitty", 3);

    Cat c2 = c1;

    return 0;
}
