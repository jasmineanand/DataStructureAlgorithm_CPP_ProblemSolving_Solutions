#include <bits/stdc++.h>
using namespace std;
void intersection(int a[], int n, int q, int b[])
{
    for (int i = 0; i < n; i++)
    {
        int k;
        for (k = 0; k < n; k++)
        {
            if (a[i] == b[k])
            {
                cout << a[i] << endl;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    int b[100];
    int k;
    for (k = 0; k < q; k++)
    {
        cin >> b[k];
    }
    intersection(a, n, q, b);
}