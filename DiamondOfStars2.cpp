#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 1; i <= ((n + 1) / 2); i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << "*";
        }
    }
    cout << endl;
}
