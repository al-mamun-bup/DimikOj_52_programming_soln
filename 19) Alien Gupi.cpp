#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    double x; cin >> x;
    int total_days = 0;
    while (x > 1) {
      ++total_days;
      x = x / 2;
    }
    cout << total_days << " days\n";
  }
  return 0;
}
