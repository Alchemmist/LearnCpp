#include <iostream>
#include <vector>


void print_vecotr(std::vector<int> sequence) {
     for (int i=0; i < sequence.size(); i++) {
        std::cout << sequence[i] << ' ';
     }
     std::cout << std::endl;
}


// 1) Сортировка пузырьком
std::vector<int> bobbel_sort(std::vector<int> surce_vec) {
     std::vector<int> result_vec = surce_vec;
     for (int i=0; i < result_vec.size(); i++) {
          for (int i=0; i < result_vec.size() - 1; i++) {
               int el_1 = result_vec[i];
               int el_2 = result_vec[i + 1];
               if (el_1 > el_2) 
                    result_vec[i] = el_2;
                    result_vec[i + 1] = el_1;
          }
     }
     return result_vec;
}


// 2) Сортировка простыми вставками
std::vector<int> inserts_sort(std::vector<int> surce_vec) {
     std::vector<int> result_vec;
     for (int i=0; i < surce_vec.size(); i++) {
          for (int i=0; i < result_vec.size() - 1; i++) {
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
     for (int i=0; i < n; i++) {
          int a;
          std::cin >> a;
          source_vec.push_back(a);
     }
     std::vector<int> soreted_vec = bobbel_sort(source_vec);
     std::cout << "Sorted sequens:" << std::endl;
     print_vecotr(soreted_vec);

     return 0;
}
