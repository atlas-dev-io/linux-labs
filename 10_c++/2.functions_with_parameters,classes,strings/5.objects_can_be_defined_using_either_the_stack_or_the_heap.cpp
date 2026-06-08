#include <iostream>

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
    Rectangle r1;
    Rectangle *r2 = new Rectangle;

    r1.set_attr(20, 12);
    r2->set_attr(25, 13);

    r1.get_area();
    r1.get_girth();

    r2->get_area();
    r2->get_girth();

    delete r2;

    return 0;
}
