#include <bits/stdc++.h>
using namespace std;



int main() {
  string s;
  int i = 0, a = 0;

  cin >> s;
  while (i < s.length()) {
    if(s[i] == 'c') {
      if(s[i+1] == '=') {
        i++;
      }
      else if(s[i+1] == '-') {
        i++;
      }
    }
    if(s[i] == 'd') {
      if(s[i+1] == 'z' && s[i+2] == '=') {
        i+=2;
      }
      else if(s[i+1] == '-') {
        i++;
      }
    }
    if(s[i] == 'l') {
      if(s[i+1] == 'j') {
        i++;
      }
    }
    if(s[i] == 'n') {
      if(s[i+1] == 'j') {
        i++;
      }
    }
    if(s[i] == 's') {
      if(s[i+1] == '=') {
        i++;
      }
    }
    if(s[i] == 'z') {
      if(s[i+1] == '=') {
        i++;
      }
    }

    a++;
    i++;
  }
  cout << a;
  
}
