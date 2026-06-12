#include <iostream>

using namespace std;

int main() {
    int i, j;
    size_t ret1, ret2, ret3;
    string str;
    cout << "Please enter a string: " << endl;
    cin >> str;

    // Find substring
    ret1 = str.find("www.");
    ret2 = str.find("http://www.");
    ret3 = str.find("https://www.");
    if (ret1 == 0 || ret2 == 0 || ret3 == 0) {
        string other_str = str.substr(str.size() - 4, 4);
        if (other_str == ".com") {
            cout << "The entered URL is correct" << endl;
        } else {
            cout << "The entered URL does not end with .com" << endl;
        }
    } else {
        cout << "The beginning of the URL was entered incorrectly" << endl;
    }

    return 0;
}
