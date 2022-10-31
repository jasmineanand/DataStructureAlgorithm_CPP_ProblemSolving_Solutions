#include <bits/stdc++.h>
using namespace std;
void print(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a[j];
        }
        cout << endl;
    }
}
int main()
{
    char a[100];
    cin >> a;
    print(a);
}