#include <bits/stdc++.h>
using namespace std;
int linear_search(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int i, key;
    int a[1000];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the number you want to search";
    cin >> key;
    cout << linear_search(a, n, key);
}
