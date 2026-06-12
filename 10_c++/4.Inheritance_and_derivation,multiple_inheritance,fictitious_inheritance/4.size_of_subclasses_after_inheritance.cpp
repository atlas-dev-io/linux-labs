#include <iostream>

using namespace std;

class Animal {
  public:
    int age;
    void eat() { cout << "Animal eating" << endl; }

  private:
    string name;
    void run() { cout << "Animal running" << endl; }

  protected:
    float weight;
    void sleep() { cout << "Animal running" << endl; }
};

class Cat : public Animal {};

int main() {

    cout << "size of string: " << sizeof(string) << endl;
    Cat c1;

    cout << "size of subclass: " << sizeof(c1) << endl;
    return 0;
}
