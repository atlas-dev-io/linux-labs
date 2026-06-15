#include <iostream>

using namespace std;

class Animal {
  public:
    void eat() { cout << "Animal is eatting" << endl; }
};

class Cat : public Animal {
  public:
    void eat() { cout << "Cat is eatting fish" << endl; }
};

class Dog : public Animal {
  public:
    void eat() { cout << "Dog is eatting bone" << endl; }
};

class Sheep : public Animal {
  public:
    void eat() { cout << "Sheep is eatting grass" << endl; }
};

class Pig : public Animal {
  public:
    void eat() { cout << "Pig is eatting cabbage" << endl; }
};

void show_animal_eat(Animal &other) { other.eat(); }

int main() {
    Animal a1;
    Cat c1;
    Dog d1;
    Sheep s1;
    Pig p1;

    show_animal_eat(a1);
    show_animal_eat(c1);
    show_animal_eat(d1);
    show_animal_eat(s1);
    show_animal_eat(p1);

    return 0;
}
