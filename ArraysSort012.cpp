#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;
    int a[100];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << "0";
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cout << "1";
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            cout << "2";
        }
    }
}