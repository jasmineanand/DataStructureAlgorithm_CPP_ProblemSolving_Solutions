#include <bits/stdc++.h>
using namespace std;
int length(char a[])
{
    if (a[0] == '\0')
    {
        return 0;
    }
    return 1 + length(a + 1);
}
int main()
{
    char a[100];
    cin >> a;
    int len = length(a);
    cout << len;
}