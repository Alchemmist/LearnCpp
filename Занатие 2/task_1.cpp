#include <iostream>


int main() {
    int a, b;
    char operator_;

    std::cout << "Put operation: ";
    std::cin >> operator_;

    std::cout << "Put first num: ";
    std::cin >> a;
    
    std::cout << "Put second num: ";
    std::cin >> b;

    std::cout << "Result: ";
    if (operator_ == '+') {
        std::cout << a + b << "\n";
    } 
    else if (operator_ == '-') {
        std::cout << a - b << "\n";
    }
    else if (operator_ == '/') {
        if (b == 0)
            std::cout << "Error, the values are not correct";
        else
            std::cout << a / b << "\n";
    }
    else if (operator_ == '*') {
        std::cout << a * b << "\n";
    }
    else {
        std::cout << "Unknown operation";
    }
}
