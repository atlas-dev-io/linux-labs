#include <cmath>
#include <iostream>

class Point {
  private:
    double x;
    double y;

  public:
    Point(const double _x, const double _y) : x(_x), y(_y) {}

    double getdistance(const Point &other) const {
        const double x_diff = x - other.x;
        const double y_diff = y - other.y;

        return std::sqrt(x_diff * x_diff + y_diff * y_diff);
    }
};

int main() {
    Point p1(0, 0);
    Point *p2 = new Point(3, 4);

    double p1_to_p2_distance = p1.Point::getdistance(*p2);

    std::cout << "Distance from p1 to p2 : " << p1_to_p2_distance << "\n"
              << std::endl;

    delete p2;
    return 0;
}
