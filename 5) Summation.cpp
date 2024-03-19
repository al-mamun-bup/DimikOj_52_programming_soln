#include<iostream>
#include <string.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int last_digit = n % 10;

    // n = n / 10000;
    n = n / 10;
    n = n / 10;
    n = n / 10;
    n = n / 10;

    int first_digit = n;
    int sum = first_digit + last_digit;
    cout << "Sum = " << sum << '\n';
    // 2nd solution
    // char s[10];
    // cin >> s;
    // int len = strlen(s);
    // int first_digit = s[0] - '0';
    // int last_digit = s[len - 1] - '0';
    // int sum = first_digit + last_digit;
    // cout << "Sum = " << sum << '\n';
  }
  return 0;
}
