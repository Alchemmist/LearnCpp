#include <queue>

int main() {
     // путсая очередь
     std::queue<int> my_que; // []
     // внести в очередь
     my_que.push(1);         // [1]
     my_que.push(2);         // [1, 2]
     // первый элемент в очереди
     my_que.front();         // 1
     // полсдений элемент в очереди
     my_que.back();
     // удалить элемент из очереди
     my_que.pop();           // [2]

     return 0;
}