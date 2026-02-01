#include <iostream>

namespace first {
    int value = 10;

    void display() {
        std::cout << "First namespace value: " << value << std::endl;
    }
}

namespace second {
    int value = 20;

    void display() {
        std::cout << "Second namespace value: " << value << std::endl;
    }
}

int main() {
    first::display();
    second::display();

    // Accessing values directly
    std::cout << "Accessing first namespace value directly: " << first::value << std::endl;
    std::cout << "Accessing second namespace value directly: " << second::value << std::endl;

    return 0;
}