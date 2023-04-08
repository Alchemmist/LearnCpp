#include <list> 

int main() {
     std::list<int> ls;

     // вставка в начало и конец списка
     ls.push_back(2);
     ls.push_front(1);

     // удаление из списка
     ls.pop_back();
     ls.pop_front();
}