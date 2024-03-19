#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    char c; cin >> c;
    if (c >= 'a' and c <= 'z') {
      cout << "Lowercase Character\n";
    }
    else if (c >= 'A' and c <= 'Z') {
      cout << "Uppercase Character\n";
    }
    else if (c >= '0' and c <= '9') {
      cout << "Numerical Digit\n";
    }
    else {
      cout << "Special Characters\n";
    }
  }
  return 0;
}
