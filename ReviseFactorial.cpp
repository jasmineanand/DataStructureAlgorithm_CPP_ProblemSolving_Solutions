#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int fac = 1;
    int i = 1;
    while (i <= n)
    {
        fac = fac * i;
        i++;
    }
    cout << fac << endl;
}