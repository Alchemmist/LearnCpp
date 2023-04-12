#include <iostream>


double pow_ON(int base, int indicator) {
     double result = base;
     for (int i=1; i < indicator; i++) {
          result *= base;
     }
     return result;
}

double pow_OsqrtN(int base, int indicator) {
     double result = base;
     if (indicator == 0) 
          return 1;
     else if (indicator % 2 == 0) 
          return pow_On(base, indicator / 2);
     else 
          return pow_On(base, (indicator - 1) / 2) * base;
}


double pow_OlogN(int base, int indicator) {
     double result = base;
     while (indicator > 0) {
          if (indicator % 2 != 0) {
               result *= base;
               indicator--;
          } else {
               base *= base; 
               indicator /= 2;
          }
     }

     return result;
}


int main() {
     int base, indicator;
     double result;
     std::cin >> base >> indicator;

     result = pow_OlogN(base, indicator);

     std::cout << result << std::endl;
     return 0;
}