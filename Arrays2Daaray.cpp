#include <bits/stdc++.h>
using namespace std;
void dimension(int a[][100], int m, int n)
{
    int count = 0;
    int i, j, t, k;
    for (i = 0; i < m; i++)
    {
        k = i;
        while (k < n)
        {
            t = count;
            {
                for (j = 0; j < n; j++)
                {
                    cout << a[t][j] << " ";
                }
                cout << endl;
                k++;
            }
        }
        count++;
    }
}
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
    dimension(a, m, n);
}