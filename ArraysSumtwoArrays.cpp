#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    int i;
    int sum = 0;
    int carry = 0;
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
    for (i = n - 1; i >= 0; i--)
        ;
    for (j = k - 1; j >= 0; j--)
    {
        a[i] + b[j] + carry == sum;
        if (sum > 9)
        {
            carry = sum / 10;
            sum = sum % 10;
            cout << sum;
            i--;
        }
        else
        {
            cout << sum;
            i--;
        }
    }
}