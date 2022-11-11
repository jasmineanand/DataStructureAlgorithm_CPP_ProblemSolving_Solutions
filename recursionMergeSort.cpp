#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int s, int mid, int e)
{
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int c[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[s + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = a[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = s;
    while (i < n1 && j < n2)
    {
        if (c[i] < b[j])
        {
            a[k] = c[i];
            k++;
            i++;
        }
        else
        {
            a[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        a[k] = c[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        a[k] = b[j];
        k++;
        j++;
    }
}
void merge_sort(int a[], int s, int e)
{
    if (s < e)
    {
        int mid = (s + e) / 2;
        merge_sort(a, s, mid);
        merge_sort(a, mid + 1, e);
        merge(a, s, mid, e);
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
    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}