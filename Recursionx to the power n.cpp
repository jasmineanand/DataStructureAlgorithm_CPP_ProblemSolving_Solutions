#include <bits/stdc++.h>
using namespace std;
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int prev = power(x, n - 1);
    return x * prev;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << power(x, n);
}