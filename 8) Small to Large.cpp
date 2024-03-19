#include<iostream>
using namespace std;

int main() {
  int t, cs = 0; cin >> t;
  while (t--) {
    int a, b, c; cin >> a >> b >> c;
    int minimum = min(min(a, b), c);
    int maximum = max(max(a, b), c);
    int middle_number = a + b + c - minimum - maximum;
    ++cs;
    cout << "Case " << cs << ": ";
    cout << minimum << ' ' << middle_number << ' ' << maximum << '\n';
  }
  return 0;
}
