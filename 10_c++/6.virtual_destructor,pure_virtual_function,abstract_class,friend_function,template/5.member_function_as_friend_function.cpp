#include <iostream>

#include <string>

using namespace std;

class Alipay;

class Person {

  private:
    string name;

  public:
    Person(string _name) : name(_name) {}

    void person_get_Alipay(Alipay &other);
};

class Alipay {

  private:
    string name;

    double money;

  public:
    friend void Person::person_get_Alipay(Alipay &other);

    Alipay(string _name, double _money) : name(_name), money(_money) {}

    // ordinary global functions as friends

    friend void getAlipay(Alipay &other);
};

void Person::person_get_Alipay(Alipay &other) {

    other.name = "Jack";

    other.money = 20.56;

    cout << "name: " << other.name << endl;

    cout << "money: " << other.money << endl;
}

int main() {

    Alipay a1("Tom", 99999999.9);

    Person p1("TOOT");

    p1.person_get_Alipay(a1);

    return 0;
}
