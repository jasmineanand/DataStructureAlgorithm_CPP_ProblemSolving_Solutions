#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int s, int e)
{
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (a[i] < a[s])
        {
            count++;
        }
    }
    int p = s + count;
    swap(a[p], a[s]);
    int i = s;
    int j = e;
    while (i < p && j > p)
    {
        while (a[i] <= a[s])
        {
            i++;
        }
        while (a[j] >= a[s])
        {
            j--;
        }
        if (i < p && j > p)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    return p;
}
void quick_sort(int a[], int s, int e)
{
    if (s < e)
    {
        int c = partition(a, s, e);
        quick_sort(a, s, c - 1);
        quick_sort(a, c + 1, e);
    }
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
    quick_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}