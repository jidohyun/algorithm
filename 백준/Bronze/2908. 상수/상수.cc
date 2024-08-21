 #include <iostream>
 #include <vector>
 #include <string>
 #include <algorithm>
 using namespace std;

 int main() {
     string a, b;
     int num1, num2;
     cin >> a >> b;
     reverse(a.begin(), a.end());
     reverse(b.begin(), b.end());
     num1 = stoi(a);
     num2 = stoi(b);
     if(num1 > num2) {
         cout << a;
     }
     else {
         cout << b;
     }
     return 0;
 }