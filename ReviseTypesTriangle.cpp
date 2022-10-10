#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if (a == b && b == c && c == a)
    {
        cout << "equilateral";
    }
    else if (a == b || b == c || c == a)
    {
        cout << "isosceles";
    }
    else
    {
        cout << "scalene";
    }

    cout
        << endl;
}
