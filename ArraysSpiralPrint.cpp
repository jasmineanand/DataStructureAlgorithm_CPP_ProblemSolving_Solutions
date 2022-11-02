#include <bits/stdc++.h>
using namespace std;
void spiral(int a[][100], int m, int n)
{
    int i;
    int j;
    int rs = 0;
    int re = m - 1;
    int cs = 0;
    int ce = n - 1;
    while (rs <= re && cs <= ce)
    {
        for (i = rs; i <= re; i++)
        {
            for (j = cs; j <= ce; j++)
            {
                cout << a[i][j] << " ";
            }
            rs++;
            for (j = ce; j >= cs; j--)
            {
                for (i = rs; i <= re; i++)
                {
                    cout << a[i][j] << " ";
                }
                ce--;

                for (i = re; i >= rs; i--)
                {
                    if (rs < re - 1)
                    {
                        for (j = ce; j >= cs; j--)
                        {
                            cout << a[i][j] << " ";
                        }
                        re--;

                        for (j = cs; j >= ce; j++)
                        {
                            if (cs > ce)
                            {
                                for (i = re; i >= rs; i++)
                                {
                                    cout << a[i][j] << " ";
                                }
                                cs++;
                            }
                            break;
                        }
                    }
                }
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
    spiral(a, m, n);
}