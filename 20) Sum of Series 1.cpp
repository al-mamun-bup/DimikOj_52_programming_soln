#include<iostream>
using namespace std;

int get_power(int x, int p) { // return x^p
  int ans = 1;
  while (p--) {
    ans = ans * x;
  }
  return ans;
}
int main() {
  int t; cin >> t;
  while (t--) {
    int x, k; cin >> x >> k;
    int sum = 0;
    for (int i = 0; i <= k; i++) {
      sum += get_power(x, i);
    }
    cout << "Result = " << sum << '\n';
  }
  return 0;
}
