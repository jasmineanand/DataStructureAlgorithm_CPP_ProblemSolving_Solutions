#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
    int m, n;
    cin >> m >> n;
    int i, j;
    int sum = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            sum = sum + a[i][j];
        }
        cout << sum << " ";
        sum = 0;
    }
}