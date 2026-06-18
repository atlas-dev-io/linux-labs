#include <cstdlib>
#include <iostream>

using namespace std;

class Array {
  private:
    int *p;
    const int size;

  public:
    Array(int n) : size(n) { p = new int[n]; }
    ~Array() { delete[] p; }
    int &operator[](int i) {
        if (i >= 0 && i < size) {
            return *(p + i);
        } else {
            cout << "Subscript out of bounds" << endl;
            exit(EXIT_FAILURE);
        }
    }
};

int main() {
    Array a1(5);

    a1[2] = 99;
    a1.operator[](4) = 101;
    return 0;
}
