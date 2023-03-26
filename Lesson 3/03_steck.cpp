#include <stack>

int main() {
// пустой стек
std::stack<int> my_st;  // []

// внести в стек
my_st.push(1);          // [1]
my_st.push(2);          // [2, 1]
// удалить вершиу стека
my_st.pop();            // [1]
// получить вершину стека
my_st.top();            // 1
}