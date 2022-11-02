#include <bits/stdc++.h>
using namespace std;
void occurring(char a[])
{
    int val = 0;
    int i, j;
    int len = strlen(a);
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (a[i] = a[j])
            {
                val++;
            }
        }
        val = 0;
    }
}

int main()
{
    char a[100];
    cin >> a;
    occurring;
}