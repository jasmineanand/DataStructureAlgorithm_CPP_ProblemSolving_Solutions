#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, j;
    cin >> m >> n;
    int **p = new int *[m];
    for (i = 0; i < m; i++)
    {
        p[i] = new int[n];
        for (j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}