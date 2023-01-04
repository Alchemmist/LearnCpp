#include <iostream>
using namespace std;

int main() {
  short int x_start;
  short int y_start;
  short int x_end;
  short int y_end;
  cin >> x_start;
  cin >> y_start;
  cin >> x_end;
  cin >> y_end;
  //
  if (x_start - x_end == y_start - y_end || x_start == x_end ||
      y_start == y_end) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
