#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;
    int a[100];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;

    for (i = 0; i < n; i++)
    {
        if (a[i] == k)

        {
            cout << a[i + 1];
            break;
        }
        if (i == n)
        {
            cout << "2";
            exit;
        }
    }
    for (int j = i + 2; j < n; j++)
    {
        cout << a[j];
    }
    for (i = 0; a[i] < k; i++)
    {
        {
            cout << a[i];
        }
    }
}
