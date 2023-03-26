#include <array>

int main() {
    std::array<int, 3> arr1 = {1, 2, 3};

    arr1[0];
    arr1[1].at(0);  // 1
    arr1.back(); // 3
    arr1.front(); // 1
    
    std::vector<int> vec;

    vec.push_back();
