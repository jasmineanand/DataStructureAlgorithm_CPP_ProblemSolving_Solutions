#include <bits/stdc++.h>
using namespace std;
int check_palindrome(char a[], int s, int e)
{
    if (s == e)
    {
        return true;
    }
    if (a[s] != a[e])
    {
        return false;
    }
    if (s < e + 1)
        return check_palindrome(a, s + 1, e - 1);

    return true;
}
int palindrome(char a[])
{
    int n = strlen(a);
    if (n == 0)
    {
        return true;
    }
    return check_palindrome(a, 0, n - 1);
}
int main()
{
    char a[100];
    cin >> a;
    if (palindrome(a))
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
    return 0;
}