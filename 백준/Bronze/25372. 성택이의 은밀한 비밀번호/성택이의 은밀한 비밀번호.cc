#include <iostream>
using namespace std;

int main() {
	int in, n;
  string put;
  cin >> in;
  for (int i = 0; i < in; i++) {
    cin >> put;
    n = put.size();
    if (6 <= n && n <= 9) {
      cout << "yes\n";
    }
    else {
      cout << "no\n";
    }
    

  }
  
  
}