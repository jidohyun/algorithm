#include <bits/stdc++.h>
using namespace std;



int main() {
  string s, rev;
  cin >> s;
  for (int i = s.length() - 1; i >= 0; i--) {
    rev += s[i];
  }
  if(rev == s) cout << "1";
    else cout << "0";
  
}