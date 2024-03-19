#include<iostream>
#include <string.h>
using namespace std;

bool is_vowel(char c) {
  if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
    return true;
  }
  else {
    return false;
  }
}
int main() {
  int t; cin >> t;
  cin.ignore();
  while (t--) {
    char s[1010];
    cin.getline(s, 1010);
    int len = strlen(s);
    int count = 0;
    for (int i = 0; i < len; i++) {
      if (is_vowel(s[i])) {
        count++;
      }
    }
    cout << "Number of vowels = " << count << '\n';
  }
  return 0;
}
