#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
  int a, b, c;
  string d;
  cin >> a >> b >> c;
  cout << a + b - c << '\n';
  string s = to_string(a);
  string s1 = to_string(b);
  d = s + s1;
  int num2 = stoi(d);
  cout << num2 - c;
  
}
