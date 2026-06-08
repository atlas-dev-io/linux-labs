#include <iostream>
#include <string.h>

/*
 *  the this pointer:
 *      Used to store the address of the current object
 *
 */

class Cat {

  public:
    void setAddr(const char *_name, float _weight, int _age) {
        strcpy(name, _name);
        weight = _weight;
        age = _age;
    }

    void show() {
        std::cout << "name: " << name << "\nage: " << age
                  << "\nweight: " << weight << std::endl;
    }

    Cat compare_age(const Cat &other) {
        if (this->age > other.age && this->weight > other.weight) {
            return *this;
        } else {
            return other;
        }
    }

  private:
    int age;
    float weight;
    char name[20];
};

int main(int argc, char *argv[]) {

    Cat c1;
    Cat c2;

    c1.setAddr("happy", 25.9, 4);
    c2.setAddr("ball", 12.5, 3);

    Cat return_info = c1.compare_age(c2);

    return_info.show();

    return 0;
}
