#include <bits/stdc++.h>
using namespace std;
double sum(int k)
{
    if (k == 0)
    {
        return 1;
    }
    double output = 1 / (pow(2, k)) + sum(k - 1);
    return output;
}
int main()
{
    int k;
    cin >> k;
    cout << sum(k);
}