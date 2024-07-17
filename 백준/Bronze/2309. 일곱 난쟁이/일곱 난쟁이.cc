#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int arr[9];
  int x = 0;
  for (int i = 0; i < 9; i++)
  {
    cin >> arr[i];
    x += arr[i];
  }
  sort(arr, arr + 9);
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 9; j++) {
      if (x - arr[i] - arr[j] == 100)
      {
        for (int k = 0; k < 9; k++)
        {
          if (arr[k] == arr[i] || arr[k] == arr[j]) {
            continue;
          }
          printf("%d\n", arr[k]);          
        }
        return 0;
      }
      
    }
  }
}