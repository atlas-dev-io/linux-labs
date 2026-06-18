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
    Cat(string _name = "unnamed", int _age = 0, double _weight = 0.0)
        : name(_name), age(_age), weight(_weight) {}

    friend istream &operator>>(istream &in, Cat &other);
    friend ostream &operator<<(ostream &out, const Cat &other);
};

istream &operator>>(istream &in, Cat &other) {
    cout << "Please enter the cat's name, age, and weight in that order."
         << endl;
    in >> other.name >> other.age >> other.weight;
    return in;
}

ostream &operator<<(ostream &out, const Cat &other) {
    out << "The cat's name, age, and weight are as follows: " << endl;
    out << "name: " << other.name << endl;
    out << "age: " << other.age << endl;
    out << "weight: " << other.weight << endl;
    return out;
}

int main() {
    Cat c1;
    cin >> c1;
    cout << c1;
    return 0;
}
