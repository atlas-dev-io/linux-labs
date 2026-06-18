#include <iostream>

using namespace std;

class Alipay {
  private:
    string name;
    double money;

  public:
    Alipay(string _name, double _money) : name(_name), money(_money) {}

    // ordinary global functions as friends
    friend void getAlipay(Alipay &other);
};
void getAlipay(Alipay &other) {
    other.name = "Jack";
    other.money = 20.56;
    cout << "name: " << other.name << endl;
    cout << "money: " << other.money << endl;
}
int main() {
    Alipay a1("Tom", 99999999.9);
    getAlipay(a1);
    return 0;
}
