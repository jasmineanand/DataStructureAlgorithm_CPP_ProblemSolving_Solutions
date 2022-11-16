#include <bits/stdc++.h>
using namespace std;
void sum(int a[], int k, int count)
{
    if (a[0] == k)
    {
        cout << a[0];
    }
    if (a[0] + a[count] == k)
    {
        cout << a[0] << " " << a[count];
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
    int k;
    cin >> k;
    sum(a, k, 0);
}