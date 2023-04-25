#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[1000];
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    int h = 1;
    int p = 0;
    int q = 0;
    while (p < n && q < m)
    {
        if (h & 2 != 0 && p < n)
        {
            cout << a[p] << " ";
            p++;
            h++;
        }
        else if (h % 2 == 0 && q < m)
        {
            cout << b[q] << " ";
            q++;
            h++;
        }
    }
    while (p < n)
    {
        cout << a[p] << " ";
        p++;
    }
    while (q < m)
    {
        cout << b[q] << " ";
        q++;
    }
}