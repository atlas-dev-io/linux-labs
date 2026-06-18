#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Cat {
  private:
    int age;
    string name;
    double weight;

  public:
    Cat(string _name, int _age, double _weight)
        : name(_name), age(_age), weight(_weight) {}

    void show() const { cout << "age: " << age << endl; }
    friend ostream &operator<<(ostream &out, Cat &other);
};

ostream &operator<<(ostream &out, Cat &other) {
    cout << "Overload the insertion operator to print the cat's information."
         << endl;
    out << "name: " << other.name << endl;
    out << "age: " << other.age << endl;
    out << "weight: " << other.weight << endl;
    return out;
}

int main() {
    Cat c1("wangcai", 5, 25.6);
    Cat c2("kitty", 6, 26.6);
    cout << c1 << c2;
    return 0;
}
