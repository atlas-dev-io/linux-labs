#include <iostream>

using namespace std;

int main() {
    int a = 78;
    const int *p = &a;
    int *q = const_cast<int *>(p);
    cout << *q << endl;
    *q = 45;
    cout << a << endl;
}
