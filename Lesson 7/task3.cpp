#include <iostream>
#include <list>


std::list<int> reverse_list(std::list<int> surce_list) {
     std::list<int> result_list;
     while (!surce_list.empty()) {
          int tmp = surce_list.front();
          result_list.push_front(tmp);
          surce_list.pop_front();
     }
     return result_list;
}


int main() {
     int n;
     std::cin >> n;
     std::list<int> user_list;

     for (int i=0; i < n; i++) {
          int a;
          std::cin >> a;

          user_list.push_back(a);
     }
     
     std::list<int> result_list;
     result_list = reverse_list(user_list);

     for (auto it = result_list.begin(); it != result_list.end(); it++) {
          std::cout << *it << " ";
     }

     return 0;
}