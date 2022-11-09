#include <bits/stdc++.h>
using namespace std;
int digits(int n)
{
    if (n / 10 == 0)
    {
        return 1;
    }
    return 1 + digits(n / 10);
}
int main()
{
    int n;
    cin >> n;
    cout << digits(n);
}