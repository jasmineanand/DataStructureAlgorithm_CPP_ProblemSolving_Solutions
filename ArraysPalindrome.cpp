#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    int i;
    int count = 0;
    int val = 0;
    for (i = 0; a[i] != 0; i++)
    {
        count++;
    }
    cout << count;
    if (count % 2 == 0)
    {
        for (i = 0; i <= (count / 2) - 1; i++)
        {
            for (int j = count - 1; j >= (count / 2); j--)
            {
                if (a[i] == a[j])
                {
                    val++;
                }
                i++;
            }
        }
        if (val == (count / 2))
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
    else
    {
        for (i = 0; i <= (count / 2); i++)
        {
            for (int j = count - 1; j >= (count / 2); j--)
            {
                if (a[i] == a[j])
                {
                    val++;
                }
                i++;
            }
        }
        if (val == (count / 2) + 1)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
}