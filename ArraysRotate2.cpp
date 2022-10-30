#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;
    int a[200];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            cout << i;
        }
    }
}