#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
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
    bubble_sort(a, n);
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
}