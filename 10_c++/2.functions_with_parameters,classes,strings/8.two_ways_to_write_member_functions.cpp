#include <iostream>

/*
 * Two ways to write member functions:
 *    Method 1: The source code of the member function is written inside the
 * class.
 *    Method 2: The source code of the member function is written outside the
 * class.
 *
 *
 * note:
 *    If the source code of a member function is particularly long, write it
 * outside.
 */

class Rectangle {

  public:
    void get_area();
    void get_girth();
    void set_attr(int _width, int _height);

  private:
    int width;
    int height;
};

void Rectangle::get_area() {
    std::cout << "The area of the rectangle :" << width * height << std::endl;
}

void Rectangle::get_girth() {
    std::cout << "The girth of the rectangle :" << 2 * (width + height)
              << std::endl;
}

void Rectangle::set_attr(int _width, int _height) {
    width = _width;
    height = _height;
}

int main(int argc, char *argv[]) {
    Rectangle r1;

    r1.set_attr(20, 12);
    r1.get_area();
    r1.get_girth();

    return 0;
}
