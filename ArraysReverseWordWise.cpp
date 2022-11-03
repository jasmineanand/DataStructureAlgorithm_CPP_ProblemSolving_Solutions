#include <bits/stdc++.h>
using namespace std;
void replace(char a[])
{
    int count = 0;
    int i, j;
    int len = strlen(a);
    i = 0,
    j = len - 1;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        int j;
        for (j = i; a[j] != ' ' && a[j] != '\0'; j++)
        {
        }
        int m = i;
        i = j;
        j--;
        while (m <= j)
        {
            swap(a[m], a[j]);
            m++;
            j--;
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