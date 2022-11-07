#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 10)
    {
        return 0;
    }
    int ld = n % 10;
    if (ld == 0)
    {
        return 1 + count(n / 10);
    }

    return count(n / 10);
}
int main()
{
    int n;
    cin >> n;
    cout << count(n);
}