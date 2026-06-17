#include <iostream>
#include <string.h>

using namespace std;

struct student {
    int age;
    string name;
};

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

/*=============================================================*/

template <> class Point<struct student> {
  private:
    struct student *p;

  public:
    Point();
    ~Point();
    void set_value(struct student array[20]);
    void sort();
    void show() const;
};

Point<struct student>::Point() { p = new struct student[20]; }

Point<struct student>::~Point() { delete[] p; }

void Point<struct student>::set_value(struct student array[20]) {
    int i = 0;
    for (i = 0; i < 20; i++) {
        p[i] = array[i];
    }
}

void Point<struct student>::sort() {
    int i, j;
    for (i = 0; i < 19; i++) {
        for (j = 0; j < 19 - i; j++) {
            if (p[j].age > p[j + 1].age) {
                struct student temp;
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

void Point<struct student>::show() const {
    cout << "After sorting:" << endl;

    for (int i = 0; i < 20; i++)
        cout << p[i].name << " " << p[i].age << endl;
}

/*=============================================================*/

int main() {
    int buf1[20] = {45, 2, 36, 8, 95, 123, 8, 6, 962, 4, 45};
    double buf2[20] = {15.6, 2.3, 56.9, 85.3, 1.2, 96.7};
    char buf3[20] = {'a', 'n', 'e', 'g', 'c'};

    struct student buf4[20] = {0};
    buf4[0].name = "zhangsan";
    buf4[0].age = 15;
    buf4[1].name = "lisi";
    buf4[1].age = 5;
    buf4[2].name = "wangwu";
    buf4[2].age = 25;
    buf4[3].name = "zhaoliu";
    buf4[3].age = 11;
    buf4[4].name = "zhaoqi";
    buf4[4].age = 30;

    Point<int> p1;
    Point<double> p2;
    Point<char> p3;
    Point<struct student> p4;

    p1.set_value(buf1);
    p2.set_value(buf2);
    p3.set_value(buf3);
    p4.set_value(buf4);

    p1.sort();
    p2.sort();
    p3.sort();
    p4.sort();

    p1.show();
    p2.show();
    p3.show();
    p4.show();

    return 0;
}
