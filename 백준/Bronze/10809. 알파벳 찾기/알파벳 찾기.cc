#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <numeric>
#include <utility>
#include <sstream>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
  string str;
  cin >> str;
  for (char c = 'a'; c <= 'z'; c++) {
    if(str.find(c) != string::npos) {
      int index = str.find(c);
      cout << index << ' ';
    }
    else {
      cout << "-1 ";
    }
  }
}