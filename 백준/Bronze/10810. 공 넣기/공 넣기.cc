#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, i, j, k;
  cin >> n >> m;
  vector <int>a(n,0);
  for (int q = 0; q < m; q++) {
    cin >> i >> j >> k;
    do {
      a[i - 1] = k;
      i++;
    } while (i <= j);
  }
  for (int q = 0; q < n; q++)
  {
    cout << a[q] << ' ';
  }
  
  
}