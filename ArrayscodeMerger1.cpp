#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, j;
    cin >> n;
    int a[200];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    int b[200];
    for (int j = 0; j < q; j++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
            if (a[i] < b[j])
            {
                cout << a[i] << endl;
                break;
            }

        for (int i = 1; i < n; i++)
            for (int j = 0; j < q; j++)
                if (a[i] > b[j])
                {
                    cout << b[j] << endl;
                    break;
                }
    }
}
