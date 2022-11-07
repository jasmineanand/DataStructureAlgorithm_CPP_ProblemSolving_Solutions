#include <bits/stdc++.h>
using namespace std;
void string_1(char a[])
{
    if (a[0] == '\0')
    {
        return;
    }
    if (a[0] == 0)
    {
        string_1(a + 1);
    }
    cout << a[0];
    string_1(a + 1);
}
int main()
{
    char a[100];
    cin >> a;
    string_1(a);
}