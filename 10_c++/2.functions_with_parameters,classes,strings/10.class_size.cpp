#include <iostream>

/*
 *  Class size:
 *
 *      1.The size of all member variables is determined
 *      by the size of allmember variables,
 *      and is independent of the members themselves.
 *
 *      2.The size ofthe class is the same as that of the struct,
 *      and they must be byte-aligned.
 *
 */

class Rectangle {

  public:
    void get_area() {
        std::cout << "The area of the rectangle :" << width * height
                  << std::endl;
    }

    void get_girth() {
        std::cout << "The girth of the rectangle :" << 2 * (width + height)
                  << std::endl;
    }

    void set_attr(int _width, int _height) {
        width = _width;
        height = _height;
    }

  private:
    int width;
    int height;
};

int main(int argc, char *argv[]) {
    std::cout << "sizeof(Rectangle) is " << sizeof(Rectangle) << std::endl;

    return 0;
}
