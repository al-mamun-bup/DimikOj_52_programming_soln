#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    for (int row = 1; row <= n; row++) {
      for (int column = 1; column <= n; column++) {
        cout << '*';
      }
      cout << '\n';
    }
    if (t > 0) cout << '\n';
  }
  return 0;
}
