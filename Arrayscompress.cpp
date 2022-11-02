#include <bits/stdc++.h>
using namespace std;
void compress(char a[])
{
    int i, j;
    int len = strlen(a);
    for (i = 0; i < len; i++)
    {
        int count = 0;
        for (j = 0; j < len; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        cout << a[i] << " " << count;
    }
}
int main()
{
    char a[100];
    cin >> a;
    compress(a);
}