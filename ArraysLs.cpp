#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, key;
    cin >> n;
    int a[1000];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number you want to search";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << i;
            break;
        }
    }
    if (i == n)
    {
        cout << "not found";
    }
}
