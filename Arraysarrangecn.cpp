#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int val;
    int i;
    val = 1;
    if (n % 2 == 0)
    {
        for (i = 0; i <= (n - 1) / 2; i++)
        {
            cout << val;
            val += 2;
        }
        val = n;
        for (i = n / 2; i <= n - 1; i++)
        {
            cout << val;
            val -= 2;
        }
    }
    else
    {
        val = 1;
        for (i = 0; i <= (n - 1) / 2; i++)
        {
            cout << val;
            val += 2;
        }
        val = n - 1;
        for (i = (n / 2) + 1; i <= n - 1; i++)
        {
            cout << val;
            val -= 2;
        }
    }
}