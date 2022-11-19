#include <bits/stdc++.h>
using namespace std;
void sum(int a[], int k, int n)
{
    if (n == 0)
    {
        return;
    }
    if (a[n - 1] > k)
        return sum(a, k, n - 1);
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << sum(a, k, n);
}