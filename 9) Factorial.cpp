#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    long long int factorial = 1;
    for (int i = 1; i <= n; i++) {
      factorial = factorial * i;
    }
    cout << factorial << '\n';
  }
  return 0;
}
