#include <bits/stdc++.h>
using namespace std;
void index(int a[], int n, int k, int count)
{
    if (n == count)
    {
        return;
    }
    if (a[count] == k)
    {
        cout << count << " ";
    }
    return index(a, n, k, count + 1);
}
int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int count = 0;
    index(a, n, k, count);
}