#include <bits/stdc++.h>
using namespace std;
void merge_two(int a[], int s, int mid, int e)
{
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int b[n1];
    int c[n2];
    for (int i = 0; i < n1; i++)
    {
        b[i] = a[s + i];
    }
    for (int j = 0; j < n2; j++)
    {
        c[j] = a[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = s;
    while (i < n1 && j < n2)
    {
        if (b[i] < c[j])
        {
            a[k] = b[i];
            k++;
            i++;
        }
        else
        {
            a[k] = c[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        a[k] = b[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        a[k] = c[j];
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
        merge_two(a, s, mid, e);
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