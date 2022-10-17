#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int a[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int e = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > e)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = e;
    }
}
int main()
{
    int n;
    cin >> n;
    int i;
    int a[1000];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    insertion_sort(a, n);
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
}