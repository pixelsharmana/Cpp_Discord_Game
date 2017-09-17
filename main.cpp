#include <iostream>
#include <string>

template<typename T>
T prompt(std::string message) {
    T value;
    return value;
}
int main() {
    std::string name;
    std::cout << "Enter player name: " << std::flush;
    std::cin >> name;
    std::cout << "Are you sure " << name << " is your name?\n";

    return 0;
}
