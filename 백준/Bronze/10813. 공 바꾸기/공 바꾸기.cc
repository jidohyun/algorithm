#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
  int n, m, i, j;
  cin >> n >> m;
  vector<int> v1(n);
  for (size_t q = 0; q < v1.size(); q++) {
    v1[q] = q + 1;
  }
  for (int q = 0; q < m; q++) {
    cin >> i >> j;
    swap(v1[i - 1], v1[j - 1]);
  }
  
  for (int q = 0; q < n; q++)
  {
    cout << v1[q] << ' ';
  }
  
  
}