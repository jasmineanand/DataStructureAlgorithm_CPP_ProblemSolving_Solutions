#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;
    int a[1000];
    int cs = 0;
    int ms = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cs = cs + a[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ms = max(cs, ms);
    }
    cout << ms;
}