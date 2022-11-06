#include <bits/stdc++.h>
using namespace std;
int number(int a[], int n, int k)
{
    n--;
    if (n < 0)
    {
        return 0;
    }
    if (a[n] == k)
    {
        cout << "true";
    }
    number(a, n - 1, k);
    {
        if (a[n] != k)
        {
            return false;
        }
    }
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
    cout << number(a, n, k);
}