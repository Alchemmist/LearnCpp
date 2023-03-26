#include <vector>


int main() {
    // пустой вектор
    std::vector<int> my_vec;   // []

    my_vec.push_back(13);      // [13, 13]
    my_vec.push_back(2);       // [13, 2]
    my_vec.push_back(58);      // [13, 2, 58]
    my_vec.push_back(12412);   // [13, 2, 58, 12412]

    my_vec.pop_back();         // [13, 2, 58]
}