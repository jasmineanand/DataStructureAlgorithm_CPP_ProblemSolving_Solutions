#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int n;
    cin >> n;
    int a[100];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    i = 0;
    while (i < n)
    {
        if (a[i] == k)
        {
            cout << "yes";
            break;
        }
        i++;
    }
    if (i == n)
    {
        cout << "no";
    }
}