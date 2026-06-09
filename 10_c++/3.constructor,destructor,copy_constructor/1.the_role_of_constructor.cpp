#include <iostream>
#include <string>
#include <sys/types.h>

using namespace std;

class Cat {
  public:
    Cat() {
        cout << "The cat class was called by its parameterless constructor"
             << endl;
    }

  private:
    string name;
    int age;
};

int main() {
    // stack space
    Cat c1, c2, c3;

    // heap space
    Cat *c4 = new Cat;
    Cat *c5 = new Cat;

    delete c4;
    delete c5;

    return 0;
}
