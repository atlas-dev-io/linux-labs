#include <iostream>

using namespace std;

int main() {
    int i, j;
    string str;
    cout << "Please enter a string: " << endl;
    cin >> str;

    for (i = 0; i < str.size() - 1; i++) {
        for (j = i + 1; j < str.size(); j++) {
            if (str.at(i) == str.at(j)) {
                str.erase(j, 1);
                j--; // to prevent missing consecutive repeating characters
            }
        }
    }

    cout << "String after deletion: " << str << endl;
}
