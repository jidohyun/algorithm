#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
  int chul;
  vector <int>v1(30);
  for (int i = 0; i < 30; i++) {
    v1[i] = i + 1;
  }
  
  for (int i = 0; i < 28; i++) {
    cin >> chul;
    v1.erase(remove(v1.begin(), v1.end(), chul), v1.end());
  }
  cout << v1[0] << ' ' << v1[1];
}