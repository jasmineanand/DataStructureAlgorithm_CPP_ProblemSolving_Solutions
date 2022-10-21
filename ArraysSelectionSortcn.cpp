#include <bits/stdc++.h>
using namespace std;
void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
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
    selection_sort(a, n);
    for (i = 0; i < n; i++)
        cout << a[i];
}