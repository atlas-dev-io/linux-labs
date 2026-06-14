#include <iostream>
#include <string>

using namespace std;

class Cat {
  private:
    string name;
    int age;
    float weight;

  public:
    Cat(string _name, int _age, float _weight)
        : name(_name), age(_age), weight(_weight) {}

    void show() const {
        // name = "Doraemon";

        cout << "name: " << name << "  "
             << "age: " << age << "  "
             << "weight: " << weight << "  " << endl;
    }
};

int main() {
    Cat c1("kitty", 5, 36.5);
    c1.show();
    return 0;
}
