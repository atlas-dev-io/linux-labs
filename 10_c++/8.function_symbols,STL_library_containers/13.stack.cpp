#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack1;

    stack1.push(45);
    stack1.push(46);
    stack1.push(47);

    const int size = stack1.size();

    for (int i = 0; i < size; i++) {
        std::cout << stack1.top() << std::endl;
        stack1.pop();
    }

    return 0;
}
