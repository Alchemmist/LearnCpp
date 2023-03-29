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


void print_stack(auto sequence) {
    for (std::stack<int> dump = sequence; !dump.empty(); dump.pop())
        std::cout << dump.top() << ' ';
    std::cout << std::endl;
}


auto transfer_stack(std::stack<int> st) {
    std::stack<int> result_st;

    while (!st.empty()) {
        result_st.push(st.top());
        st.pop();
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
    std::stack<int> st_1_copy = transfer_stack(st_1);

    st_1 = transfer_stack(st_2);
    st_2 = transfer_stack(st_1_copy);

    std::cout << "Steck 1: " << std::endl;
    print_stack(st_1);

    std::cout << "Steck 2: " << std::endl;
    print_stack(st_2);

    return 0;
}