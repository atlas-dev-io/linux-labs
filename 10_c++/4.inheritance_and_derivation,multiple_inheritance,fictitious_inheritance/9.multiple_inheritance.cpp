#include <iostream>

class Cat {
  private:
    int age;
};

class Mammal {
  private:
    double weight;
};

class Leopard : public Cat, public Mammal {
  private:
    int colour;
};

int main() {
    std::cout << "size of leopards: " << sizeof(Leopard) << std::endl;
    return 0;
}
