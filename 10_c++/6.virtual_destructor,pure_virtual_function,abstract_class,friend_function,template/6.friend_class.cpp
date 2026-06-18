#include <iostream>
#include <string>

using namespace std;

class Person;

class Alipay {
  private:
    string name;
    double money;

  public:
    Alipay(string _name, double _money) : name(_name), money(_money) {}
    friend class Person;
};

class Person {
  private:
    string name;

  public:
    Person(string _name) : name(_name) {}
    void update_alipay(Alipay &other, string new_name, double new_money) {
        other.name = new_name;
        other.money = new_money;
    }
    void get_alipay(Alipay &other) {
        cout << "name: " << other.name << "  " << "money: " << other.money
             << endl;
    }
};

int main() {
    Alipay a1("Tom", 99999999.9);
    Person p1("TOOT");
    p1.get_alipay(a1);
    p1.update_alipay(a1, "Jack", 29269298291561.45);
    p1.get_alipay(a1);
    return 0;
}
