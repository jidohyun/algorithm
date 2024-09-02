#include <iostream>
 #include <vector>
 #include <string>
 #include <algorithm>
 using namespace std;

 int main() {
     int s, t, d;
     cin >> s >> t >> d;
     cout << (d / (s * 2)) * t;
     return 0;
 }