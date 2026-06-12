#include <iostream>
#include <string>

using namespace std;

int main() {
    int i, j;
    string strA;
    string strB;
    cout << "Please enter two strings: " << endl;
    cin >> strA;
    cin >> strB;

    for (i = 0; i < strB.size(); i++) {
        for (j = 0; j < strA.size(); j++) {
            if (strB.at(i) == strA.at(j) || strB.at(i) - strA.at(j) == 32 ||
                strB.at(i) - strA.at(j) == -32) {
                strA.erase(j, 1);
                j--;
            }
        }
    }

    cout << "The strA after deletion: " << strA << endl;

    return 0;
}
