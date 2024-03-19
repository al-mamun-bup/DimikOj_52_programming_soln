#include<iostream>
#include <string.h>
using namespace std;

int main() {
  int t; cin >> t;
  cin.ignore();
  while (t--) {
    char s[10010];
    cin.getline(s, 10010);
    int len = strlen(s);
    int space_count = 0;
    for (int i = 0; i < len; i++) {
      if (s[i] == ' ') {
        space_count++;
      }
    }
    int word_count = space_count + 1;
    cout << "Count = " << word_count << '\n';
  }
  return 0;
}
