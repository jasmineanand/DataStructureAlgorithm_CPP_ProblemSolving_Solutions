#include <bits/stdc++.h>
using namespace std;
int main()
{
    int exponent = 1;
    int n;
    int x;
    cin >> n >> x;
    int i = 1;
    while (i <= n)
    {
        int d = n * n;
        exponent = exponent * d;
        i++;
    }

    cout << d << endl;
}
}
