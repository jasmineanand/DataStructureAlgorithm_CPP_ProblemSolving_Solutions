#include <bits/stdc++.h>
using namespace std;
int binary(int a[], int k, int count, int n)
{
    if (count == n)
    {
        return -1;
    }
    if (a[count] == k)
    {
        return count;
    }
    binary(a, k, count + 1, n);
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
    cout << binary(a, k, 0, n);
}