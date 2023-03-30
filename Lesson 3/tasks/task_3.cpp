#include <iostream>
#include <vector>


void print_vecotr(std::vector<int> sequence) {
     for (int i; i < sequence.size(); i++) {
        std::cout << sequence[i] << ' ';
     }
     std::cout << std::endl;
}


std::vector<int> bobbel_sort(std::vector<int> surce_vec) {
     std::vector<int> result_vec = surce_vec;
     for (int i; i < result_vec.size(); i++) {
          for (int i; i < result_vec.size() - 1; i++) {
               int el_1 = result_vec[i];
               int el_2 = result_vec[i + 1];
               if (el_1 > el_2) 
                    result_vec[i] = el_2;
                    result_vec[i + 1] = el_1;
          }
     }

     return result_vec;
}


int main() {
     int n;

     std::cout << "Put count of elements: ";
     std::cin >> n;

     std::vector<int> source_vec;
     for (int i; i < n; i++) {
          int a;
          std::cin >> a;
          source_vec.push_back(a);
     }
     std::vector<int> soreted_vec = bobbel_sort(source_vec);
     std::cout << "Sorted sequens:" << std::endl;
     print_vecotr(soreted_vec);

     return 0;
}
