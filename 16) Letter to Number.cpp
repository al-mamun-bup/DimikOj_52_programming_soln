#include<iostream>
#include <string.h>
using namespace std;

int get_number(char c) {
  return c - 'A' + 1;
}
int main() {
  int t; cin >> t;
  while (t--) {
    char s[105];
    cin >> s;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
      cout << get_number(s[i]);
    }
    cout << '\n';
  }
  return 0;
}
