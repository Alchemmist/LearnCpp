#include <array>


int main() {
    std::array<int, 3> my_arr = {13, 2, 58};

    // индексация
    my_arr[0];        // 13
    my_arr.at(0);     // 13
    my_arr.back();    // 58
    my_arr.front();   // 13
}