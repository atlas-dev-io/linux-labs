#include <iostream>

class Animal {
  public:
    Animal() {
        std::cout << "The parameterless constructor of the parent class"
                  << std::endl;
    }
    Animal(std::string food) {
        std::cout
            << "The parent class a constructor for string type, and the food: "
            << food << std::endl;
    }
    ~Animal() { std::cout << "The parent class was destructed" << std::endl; }
};

class Cat : public Animal {
  public:
    Cat() { std::cout << "Parameterless constructor of subclass" << std::endl; }
    Cat(std::string food) {
        std::cout
            << "The subclass has a constructor for string type, and the food: "
            << food << std::endl;
    }
    ~Cat() { std::cout << "The subclass was destructed" << std::endl; }
};

int main() {
    Cat c1;
    Cat c2("fish");
    return 0;
}
