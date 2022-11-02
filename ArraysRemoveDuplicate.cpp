#include <bits/stdc++.h>
using namespace std;
void duplicate(char a[])
{
    int i, j;
    int val = 0;
    int len_a = strlen(a);
    for (i = 0; i < len_a; i++)
    {
        for (j = 0; j < len_a; j++)
        {
            if (i != j && a[i] == a[j])
            {
                if (a[i] != val)
                {
                    cout << a[i];
                    val = a[i];
                }
            }
        }
    }
}
int main()
{
    int i, j;
    char a[100];
    cin >> a;
    duplicate(a);
}