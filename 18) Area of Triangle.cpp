#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int a, b, c; cin >> a >> b >> c;
    double s = (double) (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area = " << fixed << setprecision(3) << area << '\n';
  }
  return 0;
}
