#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(13);
    v1.push_back(14);
    v1.push_back(15);

    // Read/write iterator
    // vector<int>::iterator it = v1.begin();
    // for (; it != v1.end(); it++) {
    //    *it += 12;
    //}

    // Read-only iterator
    // vector<int>::const_iterator it = v1.cbegin();
    // for (; it != v1.cend(); it++) {
    //}

    // Inverse iterator
    // vector<int>::reverse_iterator it = v1.rbegin();
    auto it = v1.rbegin();
    for (; it != v1.rend(); it++) {
        *it += 12;
    }

    for (int x : v1)
        cout << "Data in the container: " << x << endl;

    return 0;
}
