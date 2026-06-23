#include <chrono>
#include <iostream>
#include <thread>

void task1() {

    while (1)

    {
        std::cout << "I am the first thread" << std::endl;
        std::this_thread::sleep_for(std::chrono::microseconds(100));
    }
}

void task2(int n) {

    while (1)

    {
        std::cout << "I am the second thread,parameter: " << n << std::endl;
        std::this_thread::sleep_for(std::chrono::microseconds(100));
    }
}

int main() {

    std::thread t1(task1);

    std::thread t2(task2, 888);

    t1.join();
    t2.join();

    return 0;
}
