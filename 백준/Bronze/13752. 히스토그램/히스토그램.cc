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
  int a, b;
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> b;
    for (int j = 0; j < b; j++)
    {
      cout << "=";
    }
    cout << endl;
  }
  
}

// 바구니 N개
// 바구니 번호 1~N
// M번