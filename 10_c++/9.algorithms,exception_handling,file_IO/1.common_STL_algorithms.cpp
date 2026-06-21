#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool fun1(int &n) {
    cout << "data: " << n << endl;
    return true;
}
int main() {

    int buf[5] = {14, 56, 89, 47, 12};
    vector<int> v1 = {147, 258, 369};

    // for_each(buf, buf + 5, fun1);
    // for_each(v1.begin(), v1.end(), fun1);

    auto ret = find(buf, buf + 5, 258);
    if (ret != buf + 5)
        cout << "Found:" << *ret << endl;
    else
        cout << "Not Found!" << endl;

    return 0;
}
