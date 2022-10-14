#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pv = 1;
    int ans = 0;
    while (n > 0)
    {
        ans = (ans + (pv * (n % 10)));
        n = n / 10;
        pv *= 2;
    }
    cout << ans;
}