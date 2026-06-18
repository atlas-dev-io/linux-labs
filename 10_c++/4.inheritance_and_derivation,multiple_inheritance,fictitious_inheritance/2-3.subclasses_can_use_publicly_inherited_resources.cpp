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
    Cat c1;

    c1.eat();
    c1.age = 5;
    return 0;
}
