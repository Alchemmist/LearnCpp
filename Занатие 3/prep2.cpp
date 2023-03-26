#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <vecotor>


int main() {
    //std::array<int, 5> arr {1, 2, 3, 4, 5};
    std::vecotor<int> arr {1, 2, 3, 4, 5};
    std::vecotor<int>::iterator iter = arr.begin();
    iter++;
    *iter;

    iter--;
    *iter;

    std::sort(arr.begin(), arr.end(), std::less<int>());    // a < b
    std::sort(arr.begin(), arr.end(), std::greater<int>()); // a > b
                                                            //
    for (int i = 0; i < 5; std::cout << arr[i] << " ", i++);
    std::cout << "\n";

    return 0;
}
