#include <iostream>

/*
 *  the this pointer:
 *      Used to store the address of the current object
 *
 */

class Cat {

  public:
    void catch_mouse() {
        std::cout << "The cat is catching the mouse; its address is " << this
                  << std::endl;
    }
    void climb_tree() { std::cout << "Cat climbing mouse" << std::endl; }

  private:
    int age;
    float weight;
    char name[20];
};

int main(int argc, char *argv[]) {

    Cat c1;
    Cat c2;
    Cat c3;

    std::cout << "c1 address: " << &c1 << std::endl;
    std::cout << "c2 address: " << &c2 << std::endl;
    std::cout << "c3 address: " << &c3 << std::endl;

    c1.catch_mouse();
    c2.catch_mouse();
    c3.catch_mouse();

    return 0;
}
