#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


int main() {
     int n, m;
     std::cin >> n >> m;
     
     std::vector<int> voting_result(n);
     int active_bulletin = 0;

     for (int i=0; i < m; i++) {
          std::string bulletin;
          std::cin >> bulletin;

          if (std::count(bulletin.begin(), bulletin.end(), '+') == 1) {
               int batch = bulletin.find('+');
               voting_result[batch] += 1;
               active_bulletin += 1;
          }
     }

     double control = active_bulletin * 0.07;
     for (int i=0; i < voting_result.size(); i++) {
          if (voting_result[i] >= control) 
               std::cout << i + 1 << ' ';
     } 
     std::cout << std::endl;
     return 0;
}