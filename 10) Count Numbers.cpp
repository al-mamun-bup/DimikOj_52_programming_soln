#include<iostream>
#include <string.h>
using namespace std;

int main() {
  int t; cin >> t;
  // getchar();
  cin.ignore();
  while (t--) {
    char s[100000];
    cin.getline(s, 100000);
    int len = strlen(s);
    int i = 0;
    while (s[i] == ' ') { // ignore starting spaces
      i++;
    }
    int count = 1; // count the first number
    while (i + 1 < len) {
      if (s[i] == ' ' && s[i + 1] != ' ') {
        count++;
      }
      i++;
    }
    cout << count << '\n';
  }
  return 0;
}
