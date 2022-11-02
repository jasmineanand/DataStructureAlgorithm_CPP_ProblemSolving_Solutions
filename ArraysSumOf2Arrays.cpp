#include <bits/stdc++.h>
using namespace std;
int calSum(int a[], int b[], int n, int k)
{
    int t[n];
    int i = n - 1, j = k - 1, q = n - 1;
    int sum = 0, carry = 0;
    while (j >= 0)
    {
        sum = a[i] + b[j] + carry;
        t[q] = (sum % 10);
        carry = sum / 10;
        q--;
        j--;
        i--;
    }
    if (n > k)
    {
        while (i >= 0)
        {
            sum = a[i] + carry;
            t[k] = (sum % 10);
            carry = sum / 10;
            q--;
            i--;
        }
    }
    int ans = 0;
    if (carry)
        ans = 10;
    for (int i = 0; i < n; i++)
    {
        ans += t[i];
        ans *= 10;
    }
    return ans / 10;
}
int calSum6(int a[], int b[], int n, int k)
{

    if (n >= k)
        return calSum(a, b, n, k);

    else
        return calSum(b, a, k, n);
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int b[100];
    int j;
    for (j = 0; j < k; j++)
    {
        cin >> b[j];
    }
    cout << calSum6(a, b, n, k);
}
