#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  for (int case_number = 1; case_number <= t; case_number++) {
    cout << "Case " << case_number << ": ";
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) { // if i divides n
        cout << i << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}
