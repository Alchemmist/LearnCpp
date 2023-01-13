#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  int m;
  cin >> n;
  m = 1;
  bool operation = true;
  double finish = 0.0;
  //
  while (m != n) {
    if (operation) {
      finish += (double)1 / m;
    } else {
      finish -= (double)1 / m;
    }
    m += 1;
    operation = not operation;
  }
  cout << finish;
}
