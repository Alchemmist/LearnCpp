#include <iostream>


int main() {
    double a, b;
    char operator_;

    std::cout << "Put operation: ";
    std::cin >> operator_;

    std::cout << "Put first num: ";
    std::cin >> a;
    
    std::cout << "Put second num: ";
    std::cin >> b;

    std::cout << "Result: ";
    switch (operator_) {
        case '+': 
            std::cout << a + b << "\n";
            break;
        case '-':
            std::cout << a - b << "\n";
            break;
        case '/':
            if (b == 0)
                std::cout << "Error, the values are not correct";
            else
                std::cout << a / b << "\n";
            break;
        case '*':
            std::cout << a * b << "\n";
            break;
        default:
            std::cout << "Unknown operation";
    }

    return 0;
}
