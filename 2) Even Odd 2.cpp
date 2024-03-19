#include<iostream>
#include <string.h>
using namespace std;

int main() {
  int t; 
  cin >> t;
  while (t--) {
    string str;
    cin >> str;
    int len = str.size();
    int last_digit = str[len - 1] - '0';
    if (last_digit % 2 == 0) {
      cout << "even\n";
    }
    else {
      cout << "odd\n";
    }
  }
}
