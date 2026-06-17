#include <iostream>

using namespace std;

struct student {
    char name[20];
    int age;
};

class Cat {
  private:
    string name;
    int age;

  public:
    Cat(string _name, int _age) : name(_name), age(_age) {}
};

template <typename T> T add(T a, T b) {
    std::cout << "The template function was called." << std::endl;
    return a + b;
}

template <> struct student add(struct student a, struct student b) {
    cout << "struct student" << endl;
    int result = a.age + b.age;
    struct student temp;
    temp.age = result;
    return temp;
}

int main() {
    int n1 = 78;
    float n2 = 789.6;
    char n3 = '@';
    struct student n4 = {"Tom", 19};
    Cat c1("kitty", 5);

    add(n1, n1);
    add(n2, n2);
    add(n3, n3);
    add(n4, n4);
    // add(c1, c1);
    return 0;
}
