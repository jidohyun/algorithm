#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <utility>
using namespace std;

int main() {
  // ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
  int a, b, i, j;
  cin >> a >> b;
  vector <int> v1(a, 0);
  for (int q = 0; q < a; q++) {
    v1[q] = q + 1;
  }
  for (int q = 0; q < b; q++) {
    cin >> i >> j;
    reverse(v1.begin() + (i - 1), v1.begin() + j);
  }
  
  for (int q = 0; q < a; q++) {
    cout << v1[q] << ' ';
  }
  
}
