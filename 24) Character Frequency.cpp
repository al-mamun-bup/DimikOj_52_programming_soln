#include<iostream>
#include <string.h>
using namespace std;

int main() {
  int t; cin >> t;
  cin.ignore();
  while (t--) {
    char s[10010];
    cin.getline(s, 10010);
    char c; cin >> c;
    cin.ignore();

    int count = 0, len = strlen(s);
    for (int i = 0; i < len; i++) {
      if (s[i] == c) {
        count++;
      }
    }
    if (count == 0) {
      cout << "'" << c << "' is not present\n";
    }
    else {
      cout << "Occurrence of '" << c << "' in '" << s << "' = " << count << '\n';
    }
  }
  return 0;
}
