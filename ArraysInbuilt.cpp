#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a < b;
}
int main()
{
    int n;
    int i;
    cin >> n;
    int a[1000];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
}