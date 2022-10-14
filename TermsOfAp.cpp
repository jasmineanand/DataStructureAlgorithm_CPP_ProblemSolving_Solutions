#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int i = 1;
    while (count <= n - 1)
    {
        int d = 3 * i + 2;
        {
            if ((d % 4) != 0)
            {
                cout << d << endl;
                count++;
            }
        }
        i++;
    }
}