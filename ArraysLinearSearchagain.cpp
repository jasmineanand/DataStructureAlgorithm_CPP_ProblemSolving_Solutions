#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j;
    cin >> n;
    int a[1000];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << " enter the number you want to search";
    cin >> j;
    for (i = 0; i <= n - 1; i++)
    {
        if (a[i] == j)
        {
            cout << j << "found at" << i << " index";
            break;
        }
    }
    if (i == n)
    {
        cout << "not present" << endl;
    }
}
