template <typename T> class Point {
  private:
    T *p;

  public:
    Point() { p = new T[20]; }
    ~Point() { delete[] p; }
};

int main() {
    Point<int> p1;
    Point<char> p2;
    return 0;
}
