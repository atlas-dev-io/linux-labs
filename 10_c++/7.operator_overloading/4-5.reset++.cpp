#include <iostream>

using namespace std;

class Cat {
  private:
    int age;

  public:
    Cat(int _age = 0) : age(_age) {}
    // Prefix ++
    Cat operator++() {
        cout << "Overloaded prefix ++" << endl;
        age += 1;
        return *this;
    }

    // Overloaded post-++
    friend Cat operator++(Cat &other, int n);

    void show() const { cout << "age: " << age << endl; }
};

Cat operator++(Cat &other, int n) {
    cout << "Overloaded post-++" << endl;
    Cat temp;
    temp.age = other.age;
    other.age += 1;
    return temp;
}

int main() {
    Cat c1(5);
    Cat c2 = ++c1;

    c1.show();
    c2.show();

    cout << "============================================" << endl;
    Cat c3 = c1++;
    c1.show();
    c3.show();

    return 0;
}
