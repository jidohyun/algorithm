#include <iostream>
using namespace std;

int main()
{
    int a, b;
    double c;
    cin >> a >> b;
    c = a * b * 0.5;
    cout << fixed;
    cout.precision(1);
    cout << c;
}