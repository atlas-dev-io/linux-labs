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
    Animal(int age, float weight) {
        std::cout << age << "  " << weight << std::endl;
    }
};

class Cat : public Animal {
  public:
    Cat() : Animal(5, 25.6) {
        std::cout << "Parameterless constructor of subclass" << std::endl;
    }
    Cat(std::string food) {
        std::cout
            << "The subclass has a constructor for string type, and the food: "
            << food << std::endl;
    }
};

int main() {
    Cat c1;
    return 0;
}
