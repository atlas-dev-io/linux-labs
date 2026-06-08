#include <iostream>

/*
 *  class Classname
 *  {
 *      Member methods:Used to describe the behavior of a class
 *      Member attributes: used to describe the parameter information that a
 * class possesses
 *  }
 *
 *
 *  note:
 *      1.If no access modifiers are specified in a class,
 *        all access modifiers are private by default.
 */

class Cat {

  public:
    void catch_mouse() { std::cout << "Cat catching mouse" << std::endl; }
    void climb_tree() { std::cout << "Cat climbing mouse" << std::endl; }

  private:
    int age;
    float weight;
    char name[20];
};

int main(int argc, char *argv[]) {
    // 1.create object
    Cat c1;

    // 2.Calling class members
    c1.catch_mouse();
    c1.climb_tree();

    return 0;
}
