#include<iostream>
#include <algorithm>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int a, b; cin >> a >> b;
    long long ans = (long long) a * b / __gcd(a, b);
    cout << "LCM = " << ans << '\n';
  }
  return 0;
}
