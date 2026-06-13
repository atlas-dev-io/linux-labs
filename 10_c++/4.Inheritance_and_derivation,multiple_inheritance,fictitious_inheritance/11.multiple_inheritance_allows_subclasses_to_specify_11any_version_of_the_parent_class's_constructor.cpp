#include <iostream>

class Cat {
  private:
    int age;

  public:
    Cat() {
        std::cout << "The parameterless constructor for class Cat" << std::endl;
    }
    Cat(int _age) : age(_age) {
        std::cout << "The constructor of class Cat with an int parameter."
                  << "age: " << age << std::endl;
    }
    ~Cat() { std::cout << "The class Cat destructs" << std::endl; }
};

class Mammal {
  private:
    double weight;

  public:
    Mammal() {
        std::cout << "The parameterless constructor for class Mammal"
                  << std::endl;
    }
    Mammal(double _weight) : weight(_weight) {
        std::cout << "The constructor of class Mammal with an double parameter."
                  << "weight: " << weight << std::endl;
    }
    ~Mammal() { std::cout << "The class Mammal destructs" << std::endl; }
};

class Leopard : public Cat, public Mammal {
  private:
    int colour;

  public:
    Leopard() : Cat(6), Mammal(65.5) {
        std::cout << "The parameterless constructor for class Leopard"
                  << std::endl;
    }
    Leopard(int _colur) : colour(_colur) {
        std::cout << "The constructor of class Leopard with an int parameter."
                  << "colour: " << colour << std::endl;
    }
    ~Leopard() { std::cout << "The class Leopard destructs" << std::endl; }
};

int main() {
    Leopard l1;
    return 0;
}
