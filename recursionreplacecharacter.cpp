#include <bits/stdc++.h>
using namespace std;
void replace(char a[], char n, char d)
{
    if (a[0] == '\0')
    {
        return;
    }
    if (a[0] == n)
    {
        cout << d;
        replace(a + 1, n, d);
    }
    else
    {
        cout << a[0];
        replace(a + 1, n, d);
    }
}
int main()
{
    char a[100];
    cin >> a;
    char n;
    cin >> n;
    char d;
    cin >> d;
    replace(a, n, d);
}