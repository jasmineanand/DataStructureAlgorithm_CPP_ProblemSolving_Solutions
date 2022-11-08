#include <bits/stdc++.h>
using namespace std;
void star(char a[])
{
    if (a[0] == '\0')
    {
        return;
    }
    if (a[0] == a[1])
    {
        cout << a[0] << "*";
        return star(a + 2);
    }
    else
    {
        cout << a[0];
        return star(a + 1);
    }
}
int main()
{
    char a[100];
    cin >> a;
    star(a);
}