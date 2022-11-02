#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[200];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    int b[200];
    for (int j = 0; j < q; j++)
    {
        cin >> b[j];
    }
    int j = 0;
    i = 0;
    while (i < n || j < q)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << endl;
            i++;
        }
        else
        {
            cout << b[j] << endl;
            j++;
        }
        if (j == q)
        {
            for (i = i; i < n; i++)
            {
                cout << a[i] << endl;
            }
        }
        }
}