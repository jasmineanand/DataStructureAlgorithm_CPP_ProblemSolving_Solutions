#include <bits/stdc++.h>
using namespace std;
int check(string a)
{
    int count = 0;
    int n = a.length();
    int i = 0;
    while (i < n)
    {
        while (i < n && a[i] == 'a')
        {
            count++;
            i++;
        }
        while (i < n && a[i] == 'b')
        {
            count--;
            i++;
        }
        if (count != 0)
            return false;
    }
    return true;
}
int main()
{
    string a;
    cin >> a;
    check(a);
    if (check(a) == true)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
}