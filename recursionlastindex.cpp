#include <bits/stdc++.h>
using namespace std;
int index(int a[], int n, int k)
{
    if (n < 0)
    {
        return -1;
    }
    if (a[n - 1] == k)
    {
        return (n - 1);
    }
    index(a, n - 1, k);
}

int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << index(a, n, k);
}