#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> map1;
    map1.insert(std::pair<std::string, std::string>("zhangsan", "123456"));
    map1.insert(std::pair<std::string, std::string>("lisi", "456789"));
    map1.insert(std::pair<std::string, std::string>("wangwu", "147258"));
    map1.insert(std::pair<std::string, std::string>("zhaoliu", "258369"));

    map1["zhaoqi"] = "159864";

    auto it = map1.begin();
    for (; it != map1.end(); it++) {
        std::cout << "key: " << it->first << std::endl;
        std::cout << "value: " << it->second << std::endl;
    }
    return 0;
}
