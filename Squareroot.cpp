#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int j;
    while ((i * i) <= n)
    {
        i++;
    }
    cout << --i;
}
