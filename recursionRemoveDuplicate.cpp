#include <bits/stdc++.h>
using namespace std;
void duplicate(char a[])
{
    if (a[0] == '\0')
    {
        return;
    }
    if (a[0] == a[1])
    {
        int i = 0;
        while (a[i] != '\0')
        {
            a[i] = a[i + 1];
            i++;
        }
        duplicate(a);
    }
    duplicate(a + 1);
}
int main()
{
    char a[100];
    cin >> a;
    duplicate(a);
    cout << a;
}