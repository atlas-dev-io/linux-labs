#include <iostream>

using namespace std;

class Cat {
  public:
    enum color { black, white, yellow };
};

int main() {
    cout << Cat::black << endl;
    enum Cat::color color1;
    return 0;
}
