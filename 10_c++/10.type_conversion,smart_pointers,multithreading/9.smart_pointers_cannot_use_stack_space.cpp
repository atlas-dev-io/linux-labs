#include <memory>

int main() {
    std::unique_ptr<int> p1(new int);

    double *a = new double;
    std::unique_ptr<double> p2(a);
}
