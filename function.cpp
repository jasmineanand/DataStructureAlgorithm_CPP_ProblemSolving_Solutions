#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int ans = sum(n);
    cout << ans;
}