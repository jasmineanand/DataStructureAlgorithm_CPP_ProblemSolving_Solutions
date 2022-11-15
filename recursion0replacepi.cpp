#include <bits/stdc++.h>
using namespace std;
void replace(char a[])
{
    if (a[0] == '\0')
    {
        return;
    }
    if (a[0] == 'p' && a[1] == 'i')
    {
        cout << "3.14";
        replace(a + 2);
    }
    else
    {
        cout << a[0];
        replace(a + 1);
    }
}
int main()
{
    char a[100];
    cin >> a;
    replace(a);
}