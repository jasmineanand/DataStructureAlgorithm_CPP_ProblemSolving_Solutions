#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int a[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int e = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > e)
        {
            a[j] = a[j + 1];
            j--;
        }
        a[j + 1] = e;
    }
}