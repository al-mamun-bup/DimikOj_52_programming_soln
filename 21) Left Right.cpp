#include<iostream>
#include <string.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    char s[55];
    cin >> s;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
      if (s[i] == 'L') {
        s[i] = s[i - 1];
      }
      else if (s[i] == 'R') {
        s[i] = s[i + 1];
      }
    }
    cout << s << '\n';
  }
  return 0;
}
