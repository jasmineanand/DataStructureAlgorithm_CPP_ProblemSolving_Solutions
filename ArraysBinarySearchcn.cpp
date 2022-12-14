#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int n, int key)
{
    int i;
    int s = 0;
    int e = n - 1;
    for (i = 0; i < n; i++)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
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
    int key;
    cin >> key;
    cout << binary_search(a, n, key);
}