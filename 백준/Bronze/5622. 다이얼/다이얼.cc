#include <iostream>
 #include <vector>
 #include <string>
 #include <algorithm>
 using namespace std;

 int main() {
     string str;
     cin >> str;

     int time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };

     int sum = 0;
     for (int i = 0; i < str.size(); i++)
     {
         sum += time[str[i]-65];
     }

     cout << sum;

     return 0;
     return 0;
 }