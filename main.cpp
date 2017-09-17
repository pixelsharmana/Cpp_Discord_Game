#include <iostream>
#include <string>

#include "player.h"

template<typename T>
T prompt(std::string message) {
    std::cout << message;
    T value;
    std::cin >> value;
    return value;
}
int main() {
    std::string name;
    name = prompt<std::string>("Enter player name: ");
    std::cout << "Are you sure " << name << " is your name?\n";

    return 0;
}
