#include <bits/stdc++.h>
using namespace std;
int length(char a[])
{
    int count = 0;
    for (int i = 0; a[i] != 0; i++)
    {
        count++;
    }
    return count;
}
void trim_spaces(char a[])
{
    char spaces = ' ';
    int i;
    int len = length(a);
    for (i = 0; i <= len - 1; i++)
    {
        if (a[i] != ' ')
        {
            cout << a[i];
        }
    }
}
int main()
{
    char a[100];
    cin.getline(a, 100);
    trim_spaces(a);
}