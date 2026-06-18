#include <iostream>

using namespace std;

template <typename T> class Point {
  private:
    T *p;

  public:
    Point();
    ~Point();
    void set_value(T array[20]);
    void sort();
    void show() const;
};
template <typename T> Point<T>::Point() { p = new T[20]; }

template <typename T> Point<T>::~Point() { delete[] p; }

template <typename T> void Point<T>::set_value(T array[20]) {
    int i = 0;
    for (i = 0; i < 20; i++) {
        p[i] = array[i];
    }
}

template <typename T> void Point<T>::sort() {
    int i, j;
    for (i = 0; i < 19; i++) {
        for (j = 0; j < 19 - i; j++) {
            if (p[j] > p[j + 1]) {
                T temp;
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

template <typename T> void Point<T>::show() const {
    cout << "After sorting:" << endl;

    for (int i = 0; i < 20; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    int buf1[20] = {45, 2, 36, 8, 95, 123, 8, 6, 962, 4, 45};
    double buf2[20] = {15.6, 2.3, 56.9, 85.3, 1.2, 96.7};
    char buf3[20] = {'a', 'n', 'e', 'g', 'c'};

    Point<int> p1;
    Point<double> p2;
    Point<char> p3;

    p1.set_value(buf1);
    p2.set_value(buf2);
    p3.set_value(buf3);

    p1.sort();
    p2.sort();
    p3.sort();

    p1.show();
    p2.show();
    p3.show();

    return 0;
}
