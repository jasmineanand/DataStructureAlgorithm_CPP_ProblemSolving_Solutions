#include <bits/stdc++.h>
using namespace std;
int length(char b[])
{
    int count = 0;
    for (int i = 0; b[i] != 0; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char a[100];
    cin >> a;
    cout << a << endl;
    cout << length(a);
}