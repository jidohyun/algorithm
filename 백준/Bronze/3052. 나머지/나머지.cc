#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <utility>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
  int num = 0;
  vector <int>num2(10);
  for (int i = 0; i < 10; i++) {
    cin >> num2[i];
    num2[i] %= 42;
  }
  set <int> s1(num2.begin(), num2.end());
  cout << s1.size();
}