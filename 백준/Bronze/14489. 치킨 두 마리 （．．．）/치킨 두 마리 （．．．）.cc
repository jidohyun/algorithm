#include <iostream>
 #include <vector>
 #include <string>
 #include <algorithm>
 using namespace std;

 int main() {
     int a, b, c;
     cin >> a >> b >> c;
     c *= 2;
     if(a + b >= c) {
         cout << a + b - c;
     }
     else if(a + b < c) {
         cout << a + b;
     }
     return 0;
 }
 