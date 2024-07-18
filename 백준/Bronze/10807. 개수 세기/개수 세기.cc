#include <iostream>
#include <string>
using namespace std;

int main() {
  // ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
  int N, v, count = 0, sum = 0;
  cin >> N;
  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }
    cin >> v;
  for (int i = 0; i < N; i++)
  {
    
    if (arr[i] == v) {
      sum++;
    }
  }
  cout << sum;
  
}