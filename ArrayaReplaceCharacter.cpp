#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    char c1;
    cin >> c1;
    char c2;
    cin >> c2;
    int count = 0;
    int i;
    for (i = 0; a[i] != 0; i++)
    {
        count++;
    }
    for (i = 0; i <= count - 1; i++)
    {
        if (a[i] == c1)
        {
            a[i] = c2;
        }
    }
    cout << a;
}