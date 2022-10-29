#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    int i, j;
    int val = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << a[i];
        }
    }
}