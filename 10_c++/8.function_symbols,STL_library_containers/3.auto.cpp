#include <iostream>

using namespace std;

const char *fun() {
    const char *p = "hello";
    return p;
}

int main() {
    int a = 78;
    auto b = a;
    cout << b << endl;

    auto ret = fun();
    cout << ret << endl;
    return 0;
}
