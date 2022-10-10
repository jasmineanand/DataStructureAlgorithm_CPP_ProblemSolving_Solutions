#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    cin >> a >> b;
    if (a < b)
    {
        if (b % a == 0)
        {
            cout << a;
        }
        else if (b > a)
        {
            if (a % b == 0)
            {
                cout << b;
            }
        }
    }
    cout << endl;
}