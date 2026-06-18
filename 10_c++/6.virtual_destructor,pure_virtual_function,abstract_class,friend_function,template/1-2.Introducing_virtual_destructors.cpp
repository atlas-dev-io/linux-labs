#include <iostream>
#include <string.h>

using namespace std;

class Animal {
  public:
    Animal() { cout << "Non-parametric structures of animals" << endl; }
    virtual ~Animal() { cout << "Animals analyzed." << endl; }
};

class Cat : public Animal {
  private:
    char *name;

  public:
    Cat(const char *_name) {
        cout << "Parametric structure of cats." << endl;
        name = new char[20];
        strcpy(name, _name);
    }

    ~Cat() {
        cout << "The cat deconstructed." << endl;
        delete[] name;
    }
};

int main() {
    Cat *c1 = new Cat("kitty");
    Animal *p = c1;
    delete p;
    return 0;
}
