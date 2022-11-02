#include <bits/stdc++.h>
using namespace std;
void remove(char a[], int n)
{
    int len = strlen(a);
    int i;
    for (i = 0; i < len; i++)
    {
        if (a[i] != n)
        {
            cout << a[i];
        }
        if (a[i] == n)
        {
            i++;
        }
    }
}
int main()
{
    char a[100];
    cin >> a;
    char n;
    cin >> n;
    remove(a, n);
}