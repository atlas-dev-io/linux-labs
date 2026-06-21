#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2 = {45, 69, 78, 123};

    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(13);
    v1.push_back(14);
    v1.push_back(15);

    // for (int i = 0; i < v1.size(); i++)
    //     cout << "The contents of the container: " << v1.at(i) << endl;

    for (int x : v1)
        cout << x << endl;

    return 0;
}
