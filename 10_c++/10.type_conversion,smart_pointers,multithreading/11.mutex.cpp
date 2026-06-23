#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>

int commodity = 0;

std::mutex m1;

void task1() {

    while (1) {
        m1.lock();
        commodity++;
        std::cout << "The production department produced one item. Quantity:"
                  << commodity << std::endl;
        m1.unlock();
        std::this_thread::sleep_for(std::chrono::microseconds(300));
    }
}

void task2() {

    while (1) {
        m1.lock();
        commodity--;
        std::cout << "The sales department sold one item. Quantity:"
                  << commodity << std::endl;
        m1.unlock();
        std::this_thread::sleep_for(std::chrono::microseconds(300));
    }
}

int main() {

    std::thread t1(task1);

    std::thread t2(task2);

    t1.join();
    t2.join();

    return 0;
}
