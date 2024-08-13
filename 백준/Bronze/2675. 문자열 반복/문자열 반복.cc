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
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int b;
    cin >> b;
    string str1;
    cin >> str1;
    for (char chr : str1) {
      for (int j = 0; j < b; j++)
      {
        cout << chr;
      }
    }
    cout << "\n";
  }
  
  
}

// 바구니 N개
// 바구니 번호 1~N
// M번