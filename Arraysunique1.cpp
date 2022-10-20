#include <bits/stdc++.h>
using namespace std;
void unique(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (a[i] == a[j])
            {
                break;
            }
        }
        int j;
        for (j == n)
        {
            cout << a[i];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int i;
    int a[100];
    for (i = 0; i, n; i++)
    {
        cin >> a[i];
    }
    unique(a, n);
}
