#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << a;
    }
    else if (b >= c && b >= a)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
    cout << endl;
}