#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string word;
  int count = 0;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> word;
    
    bool alphabet[26] = {false,};
    alphabet[(int)(word[0]) - 97] = true;

    for (int i = 1; i < word.size(); i++) {
      if (word[i] == word[i - 1]) {
        continue;
      }
      else if(word[i] != word[i-1] && alphabet[(int)word[i] - 97] == true) {
        count++;
        break;
      }
      else {
        alphabet[(int)(word[i] - 97)] = true;
      }
    }
  }
  cout << N - count;
  
}

// 케이스 i의 수를 입력받는다.
// 출력될 수를 담는 score을 선언한다.
// 벡터를 케이스만큼 i선언한다
// 케이스의 수 i만큼 반복하며 문자열을 i번 입력받는다.
// 1번째 벡터부터 i번의 벡터까지 문자열을 돈다 문자열을 돌때 문자열의 인덱스의 값을 변수에 저장해둔다.
// 배열을 돌면서 변수의 저장한 문자가 끝까지 중복되지 않는다면 score에 1을 더한다.
