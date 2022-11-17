#include <bits/stdc++.h>
using namespace std;
int staircase(int n)
{
    if (n == 3)
    {
        return 4;
    }
    if (n == 1 || n == 2)
    {
        return n;
    }

    int x = staircase(n - 1);
    int y = staircase(n - 2);
    int z = staircase(n - 3);
    return x + y + z;
}
int main()
{
    int n;
    cin >> n;
    cout << staircase(n);
}