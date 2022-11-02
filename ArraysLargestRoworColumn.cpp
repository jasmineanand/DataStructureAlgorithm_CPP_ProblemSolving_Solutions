#include <bits/stdc++.h>
using namespace std;
void sum(int a[][100], int m, int n)
{
    int i, j;
    int t;
    int sum_row = 0;
    int max_row = INT_MIN;
    for (i = 0; i < m; i++)
    {
        sum_row = 0;
        for (j = 0; j < n; j++)
        {
            sum_row = sum_row + a[i][j];
        }
        {
            if (sum_row > max_row)
            {
                max_row = sum_row;
                t = i;
            }
        }
    }
    int sum_clm = 0;
    int max_clm = INT_MIN;
    for (j = 0; j < n; j++)
    {
        sum_clm = 0;
        for (i = 0; i < m; i++)
        {
            sum_clm = sum_clm + a[i][j];
        }
        {
            if (sum_clm > max_clm)
            {
                max_clm = sum_clm;
                t = j;
            }
        }
    }
    {
        if (max_row >= max_clm)
        {
            cout << "row: " << t << " " << max_row;
        }
        if (max_row < max_clm)
        {
            cout << "column: " << t << " " << max_clm;
        }
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
    sum(a, m, n);
}