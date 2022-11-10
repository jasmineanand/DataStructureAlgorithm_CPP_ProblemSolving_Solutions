#include <bits/stdc++.h>
using namespace std;

bool checkNumber(int a[], int n, int k)
{

    if (n == 1)
    {
        if (a[0] == k)
            return true;
        else
            return false;
    }
    if (a[0] == k)
    {
        return true;
    }
    else
    {
        return checkNumber(a + 1, n - 1, k);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    if (checkNumber(a, n, k))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}