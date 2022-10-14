#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n >> k;
    int i = 1;
    int sum = 0;
    int product = 1;
    if (k == 1)
    {
        while (i <= n)
        {
            sum = sum + i;
            i++;
        }
        {
            cout << sum;
        }
    }
    else if (k == 2)
    {
        while (i <= n)
        {
            product = product * i;
            i++;
        }
        {
            cout << product;
        }
    }
    else
    {
        cout << -1;
    }
    cout << endl;
}
