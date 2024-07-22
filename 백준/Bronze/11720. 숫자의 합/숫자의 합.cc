#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <numeric>
#include <utility>
using namespace std;

int main() {
  // ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
  int a;
  string s;
  cin >> a >> s;
  int sum = 0;
  for (int i = 0; i < a; i++)
  {
    sum += s[i] - '0';
  }
  cout << sum;

}