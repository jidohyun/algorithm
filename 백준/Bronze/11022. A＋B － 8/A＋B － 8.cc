#include <iostream>
using namespace std;

int main() {
  int a, b, t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    cin >> a >> b;
    printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
  }
  
}