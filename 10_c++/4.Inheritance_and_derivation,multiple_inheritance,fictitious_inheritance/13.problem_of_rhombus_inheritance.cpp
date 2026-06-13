#include <iostream>

class Animal {
  public:
    Animal() {
        std::cout << "The parameterless constructor for class Animal"
                  << std::endl;
    }
    ~Animal() { std::cout << "The class Animal destructs" << std::endl; }
    void eat() { std::cout << "Animal is eatting" << std::endl; }
};
class Cat : public Animal {
  private:
    int age;

  public:
    Cat() {
        std::cout << "The parameterless constructor for class Cat" << std::endl;
    }
    ~Cat() { std::cout << "The class Cat destructs" << std::endl; }
};

class Mammal : public Animal {
  private:
    double weight;

  public:
    Mammal() {
        std::cout << "The parameterless constructor for class Mammal"
                  << std::endl;
    }
    ~Mammal() { std::cout << "The class Mammal destructs" << std::endl; }
};

class Leopard : public Cat, public Mammal {
  private:
    int colour;

  public:
    Leopard() {
        std::cout << "The parameterless constructor for class Leopard"
                  << std::endl;
    }
    ~Leopard() { std::cout << "The class Leopard destructs" << std::endl; }
};

int main() {
    Leopard l1;
    // l1.eat();
    return 0;
}
