#include <array>
#include <iostream>

int main() {
    std::array<int, 5> arr1;
    std::array<int, 5> arr2{1, 2, 3, 4, 5};

    arr1.at(0) = 2;
    std::cout << arr1[0] << "\n";

    return 0;
}
