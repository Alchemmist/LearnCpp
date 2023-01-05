#include <iostream>
using namespace std;

int main() {
  short int month;
  int year;
  bool ves_year = false;
  cin >> month >> year;
  //
  if (year % 400 == 0) {
    ves_year = true;
  } else if (year % 100 == 0) {
    ves_year = false;
  } else if (year % 4 == 0) {
    ves_year = true;
  } else {
    ves_year = false;
  }
  //
  if (ves_year && month == 2) {
    cout << 28 + (month + month / 8) % 2 + 2 % month + 1 / month * 2 + 1;
  } else {
    cout << 28 + (month + month / 8) % 2 + 2 % month + 1 / month * 2;
  }
}
