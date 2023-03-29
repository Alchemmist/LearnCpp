#include <iostream>


int main() {
     int n, maxi = 0;

     std::cout << "Count of hight: ";
     std::cin >> n;
     for (int i = 0; i < n; i++) {
          int h = 0;
          std::cin >> h;
          if (h > maxi) 
               maxi = h;
     }
     std::cout << "Max area: " << maxi << std::endl;
}