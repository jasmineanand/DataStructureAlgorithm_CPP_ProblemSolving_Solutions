#include <bits/stdc++.h>
using namespace std;
void remove(char a[])
{
    if (a[0] == '\0')
    {
        return;
    }
    if (a[0] == 'x')
    {
        return remove(a + 1);
    }
    else
    {
        cout << a[0];
        remove(a + 1);
    }
}
int main()
{
    char a[100];
    cin >> a;
    remove(a);
}