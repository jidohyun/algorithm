#include <iostream>
using namespace std;

int main() {
  int a, b = -1000000, output, s = 1000000;
  cin >> a;
  int arr[a];
  
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
    if (arr[i] > b) {
      b = arr[i];
    }
    if (arr[i] < s) {
      s = arr[i];
    }
    
  }
  cout << s << ' ' << b;
}