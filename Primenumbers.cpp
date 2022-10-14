#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d = 2;
    while (n > d)
    {
        if (n % d == 0)
        {
            cout << " it is not prime";
        }
        d++;
        if (d >= n)
        {
            cout << "it is prime";
        }
    }
}