#include <bits/stdc++.h>
using namespace std;
void sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << "0";
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cout << "1";
        }
    }
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
    sort(a, n);
}