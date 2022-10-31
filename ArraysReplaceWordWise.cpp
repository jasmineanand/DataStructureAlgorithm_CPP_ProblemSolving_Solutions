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
void replace(char a[])
{
    int len = length(a);
    int i = 0, j = len - 1;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
    for (int j = 0; a[j] == ' '; j++)
    {
        for (int i = 0; a[i] == ' '; i++)
        {
                }
    }
}
int main()
{
    char a[100];
    cin.getline(a, 100);
    replace(a);
    cout << a;
}