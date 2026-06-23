#include <iostream>
#include <stdexcept>

template <typename T> class Aipoint {
  public:
    Aipoint(const int _size) : size(_size) { p = new T[size]; }
    ~Aipoint() { delete[] p; }
    T &operator[](int subscript);

  private:
    T *p;
    const int size;
};

template <typename T> T &Aipoint<T>::operator[](int subscript) {
    if (subscript >= 0 && subscript <= size - 1)
        return *(p + subscript);
    throw std::out_of_range("Index out of bounds!");
}

int main() {
    Aipoint<int> a1(10);

    a1[0] = 12;
    a1[1] = 79;
    std::cout << "a1[0] = " << a1[0] << std::endl;
    std::cout << "a1[1] = " << a1[1] << std::endl;

    return 0;
}
