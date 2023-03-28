#include <iostream>
#include <stack>


auto get_stack(int count) {
    std::stack<int> result_st;

    for (int i = 0; i < count; i++) {
        int value;

        std::cout << "Put " << i + 1 << " stack value: ";
        std::cin >> value;        

        result_st.push(value);
    }

    return result_st;
}


int main() {
    // размеры стеков
    int count_1, count_2;

    std::cout << "Put count of stack 1: ";
    std::cin >> count_1;
    std::stack<int> st_1 = get_stack(count_1);

    std::cout << "Put count of stack 2: ";
    std::cin >> count_2;
    std::stack<int> st_2 = get_stack(count_2);

    return 0;
}