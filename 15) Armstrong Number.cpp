#include<iostream>
using namespace std;

int cube(int n) {
  return n * n * n;
}

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int original_number = n;
    int last_digit = n % 10;
    n = n / 10;
    int middle_digit = n % 10;
    n = n / 10;
    int first_digit = n;

    int sum = cube(first_digit) + cube(middle_digit) + cube(last_digit);

    if (sum == original_number) {
      cout << original_number << " is an armstrong number!\n";
    }
    else {
      cout << original_number << " is not an armstrong number!\n";
    }
  }
  return 0;
}
