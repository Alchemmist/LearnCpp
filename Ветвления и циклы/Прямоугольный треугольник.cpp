#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  int c;
  cin >> a;
  cin >> b;
  cin >> c;
  //
  if (a * a + b * b == c * c || c * c + a * a == b * b ||
      c * c + b * b == a * a) {
    cout << "YES";
  } else if (a + b <= c || c + a <= b || c + b <= a) {
    cout << "UNDEFINED";
  } else {
    cout << "NO";
  }
}
