#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n;
  cin >> k;
  --n;
  //
  int count = 0;
  for (int i = 1; i <= k + n; i++) {
    if (i - n < 10) {
      cout << " ";
    }
    if (i <= n) {
      cout << " ";
    } else {
      cout << i - n;
    }
    count += 1;
    //
    if (count == 7) {
      cout << endl;
      count = 0;
    } else {
      cout << " ";
    }
  }
  cout << endl;
}
