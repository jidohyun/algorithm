#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
  int price, count, nprice, ncount, bill = 0;
  cin >> price >> count;
  for (int i = 0; i < count; i++)
  {
    cin >> nprice >> ncount;
    bill += nprice * ncount;
  }
  if (bill == price)
  {
    cout << "Yes";
  } else {
    cout << "No";
  }
  
}