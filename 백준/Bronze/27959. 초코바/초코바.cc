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
  int a, b;
  cin >> a >> b;
  a *= 100;
  if (a >= b) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }
}
  