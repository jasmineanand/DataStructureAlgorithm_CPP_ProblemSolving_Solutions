#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
    int m, n;
    cin >> m >> n;
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "row wise" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << "clm wise" << endl;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}