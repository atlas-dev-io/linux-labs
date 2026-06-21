#include <iostream>
#include <queue>

int main() {
    std::queue<int> queue1;

    queue1.push(45);
    queue1.push(46);
    queue1.push(47);

    while (!queue1.empty()) {
        std::cout << queue1.front() << std::endl;
        queue1.pop();
    }

    return 0;
}
