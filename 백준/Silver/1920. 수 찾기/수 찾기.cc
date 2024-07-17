#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
  int a;
  vector<int> l;
  string s;
  cin >> a;
  for (int i = 0, j; i < a; i++) {
    cin >> j;
    l.push_back(j);
  }
  sort(l.begin(), l.end());

  cin >> a;
  for (int i = 0, j; i < a; i++) {
    cin >> j;
    bool r = false;
    int start = 0, end = l.size() - 1;
    while (start <= end)
    {
      int mid = (start + end) / 2;
      if (l[mid] < j) {
        start = mid + 1;  
      } 
      else if (l[mid] > j) {
        end = mid - 1;
      }
      else {
        r = true;
        break;
      }
    }
    s += (r ? '1' : '0');
    s += '\n';
  }
  cout << s;
}