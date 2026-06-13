#include <iostream>

class Animal {
  public:
};
class Cat : virtual public Animal {
  private:
    int age;

  public:
};

class Mammal : virtual public Animal {
  private:
    double weight;

  public:
};

class Leopard {
  private:
    int colour;

  public:
};
int main() {
    std::cout << "size of class Cat: " << sizeof(Cat) << std::endl;
    std::cout << "size of class Mammal: " << sizeof(Mammal) << std::endl;

    return 0;
}
