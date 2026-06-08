#include <cstddef>
#include <iostream>
#include <string>

/*
 *
 *  Possible scenarios for using strings in C language:
 *      1.arrays or pointers:
 *          a.When storing strings, you need to consider
 *              the issue of out-of-bounds access (which may
 *              cause a segmentation fault).
 *          b.To perform CRUD operations on strings,
 *              you need to encapsulate your own functions.
 *
 *  Advantages of string in C++:
 *      1.As long as the system has enough memory,
 *          you can store as much as you want.
 *      2.Provides a large number of member functions
 *          to help developers manipulate strings.
 *
 */

using namespace std;

int main(int argc, char *argv[]) {
    // string str1;
    // cout << "Please enter a string!" << endl;
    // cin >> str1;
    //
    // cout << "The string you just entered: " << str1 << endl;

    // append string
    string str1 = "hello";
    string str2 = "world";
    char buf[20] = "hahaha";
    // str1.append(str2);
    // str1.append(str2, 3, 2);
    // str1.append(buf);
    // str1.append(buf, 3);
    // str1.append(buf + 2, 2);
    // str1.append(5, '#');

    // Assigning a value will overwrite the original content.
    // str1.assign(str2);

    // Get the character corresponding to the index
    // cout << str1.at(2) << endl;

    // Get the last character
    // cout << str1.back();

    // Convert a string object to a C-style string.
    // const char *p = str1.c_str();
    // const char *p = str1.data();
    // cout << "p is  " << p << endl;

    // Clear string
    // str1.clear();

    // company
    // int ret = str1.compare(3, 2, "lo");
    // int ret = str1.compare(0,5,"wohellota",2,5);
    // if (ret == 0) {
    //     cout << "The two strings are the same" << endl;
    // } else {
    //     cout << "The two strings are different" << endl;
    // }

    // copy
    // char otherbuf[10] = {'\0'};
    // str1.copy(otherbuf, 3);
    // cout << otherbuf << endl;

    // isEmpty
    //  if (str1.empty()) {
    //      cout << "str1 ios empty" <<endl;
    //  }

    // delete string
    // str1.erase(2, 3);
    // cout << str1 << endl;

    // find
    // size_t ret = str1.find("he");
    // if (ret != -1) {
    //     cout << "First appearance: " << ret << endl;
    // } else {
    //     cout << "none" << endl;
    // }

    // insert
    // str1.insert(2, "hongkong");
    // str1.insert(2, "hongkong", 3, 2);
    // cout << str1 << endl;
    //
    // cout << str1.length() << endl;
    // cout << str1.size() << endl;

    // str1.pop_back();
    // str1.push_back('@');

    // str1.replace(0, 2, "ta");
    // cout << str1 << endl;

    // string ret = str1.substr(2, 2);
    // cout << ret << endl;

    str1.swap(str2);
    cout << str1 << endl;
    cout << str2 << endl;

    // cout << "str1 is " << str1 << endl;

    return 0;
}
