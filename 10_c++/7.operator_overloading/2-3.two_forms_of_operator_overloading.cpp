#include <iostream>

using namespace std;

class Rect {
  private:
    int width;
    int height;

  public:
    Rect(int _width = 0, int _height = 0) : width(_width), height(_height) {}
    friend Rect operator+(int n, const Rect &other);
    Rect operator-(int n) const;
    Rect operator+(int n) const;
    Rect operator+(const Rect &other) const;
    void show() const;
};

Rect operator+(int n, const Rect &other) {
    return Rect(other.width + n, other.height + n);
}

Rect Rect::operator-(int n) const { return Rect(width - n, height - n); }

Rect Rect::operator+(int n) const { return Rect(width + n, height + n); }

Rect Rect::operator+(const Rect &other) const {
    return Rect(width + other.width, height + other.height);
}
void Rect::show() const {
    cout << "width: " << width << "  " << "height: " << height << endl;
}

int main() {
    Rect r1(45, 23);
    Rect r2(12, 9);
    Rect r3(78, 25);

    Rect r4 = 9 + r1 + 5 + r2 + 6 + r3 - 7;
    r4.show();
    return 0;
}
