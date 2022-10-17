#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i;
    int key;
    cin >> n;
    int a[1000];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "enter the number ";
    cin >> key;
    for (i = 0; i <= n - 1; i++)
    {
        if (a[i] == key)
        {
            cout << key << "found at " << i;
            break;
        }
    }
    if (i == n)
    {
        cout << "not found";
    }
}