#include <iostream>
 #include <vector>
 #include <string>
 #include <algorithm>
 using namespace std;

 int main() {
     int k, d, a;
     scanf("%d/%d/%d", &k, &d, &a);
     if(k + a < d || d == 0) {
         cout << "hasu";
     }
     else {
         cout << "gosu";
     }
     return 0;
 }
