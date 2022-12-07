#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp;
    temp = a[0];
    a[0] = a[n - 1];
    a[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}