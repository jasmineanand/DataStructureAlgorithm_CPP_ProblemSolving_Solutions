#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int fac_1 = factorial(n - 1);
    int output = n * fac_1;
    return output;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
}