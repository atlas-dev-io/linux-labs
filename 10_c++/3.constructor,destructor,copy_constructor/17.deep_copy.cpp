#include <iostream>
#include <ostream>
#include <string.h>
/*
 *  achieving deep copy
 */
class Cat {
  private:
    char *name;
    int age;

  public:
    Cat(const Cat &other) {
        this->name = new char[20];
        strcpy(this->name, other.name);
        this->age = other.age;
    }
    Cat(const char *_name = "", int _age = 0) {
        name = new char[20];
        strcpy(name, _name);
        age = _age;
        std::cout << "Constructor" << std::endl;
    }

    void show() {
        std::cout << "name: " << name << "  age: " << age << std::endl;
        std::cout << "address of name : " << (int *)name << std::endl;
    }
    void set_attr(const char *newname, int newage) {
        strcpy(name, newname);
        age = newage;
    }
};

int main() {
    Cat c1("kitty", 3);

    Cat c2 = c1;
    c1.show();
    c2.show();

    std::cout << "==========================================" << std::endl;

    c1.set_attr("Tom", 4);

    c1.show();
    c2.show();

    return 0;
}
