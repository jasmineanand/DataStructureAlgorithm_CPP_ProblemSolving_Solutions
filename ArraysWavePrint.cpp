#include <bits/stdc++.h>
using namespace std;
void wave(int a[][100], int m, int n)
{
    int i, j;
    for (j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (i = 0; i < m; i++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (i = m - 1; i >= 0; i--)
            {
                cout << a[i][j] << " ";
                        }
        }
    }
}

int main()
{
    int a[100][100];
    int m, n, i, j;
    cin >> m >> n;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    wave(a, m, n);
}