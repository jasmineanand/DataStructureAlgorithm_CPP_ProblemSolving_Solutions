#include <bits/stdc++.h>
using namespace std;
int check(string a, int start)
{
    if (a[start] == '\0')
    {
        return true;
    }
    if (a[start] != 'a')
    {
        return false;
    }
    if (a[start + 1] == 'b' && a[start + 2] == 'b')
    {
        return check(a, start + 3);
    }
    return check(a, start + 1);
}
int check_ab(string a)
{
    if (a[0] == '\0')
    {
        return true;
    }
    if (a[0] != 'a')
    {
        return false;
    }
    return check(a, 0);
}
int main()
{
    string a;
    cin >> a;
    int ans = check_ab(a);
    if (ans)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
}