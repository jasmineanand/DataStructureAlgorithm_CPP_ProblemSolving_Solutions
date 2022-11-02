#include <bits/stdc++.h>
using namespace std;
void permutation(char a[], char b[])
{
    int i, j;
    int val = 0;
    int len_a = strlen(a);
    int len_b = strlen(b);
    if (len_a != len_b)
    {
        cout << "false";
    }
    for (i = 0; i < len_a; i++)
    {
        for (j = 0; j < len_b; j++)
        {
            if (a[i] == a[j])
            {
                val++;
                break;
            }
        }
        if (j == len_b)
        {
            cout << "false";
            break;
        }
    }
    if (val == len_a)
    {
        cout << "true";
    }
}
int main()
{
    int i, j;
    char a[100];
    cin >> a;
    char b[100];
    cin >> b;
    permutation(a, b);
}