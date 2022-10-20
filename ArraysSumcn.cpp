#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << sum;
}