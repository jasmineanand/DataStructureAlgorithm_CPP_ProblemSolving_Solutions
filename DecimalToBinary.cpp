#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pv = 1;
    int ans = 0;
    int rem;
    while (n > 0)
    {
        rem = n % 2;
        n = n / 2;
        ans = (ans + (rem * pv));
        pv *= 10;
    }
    cout << ans;
}