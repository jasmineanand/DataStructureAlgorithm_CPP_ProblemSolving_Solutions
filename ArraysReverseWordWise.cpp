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
    for (i = 0; a[i] != ' '; i++)
    {

        for (j = i; a[j] != ' '; j++)
        {
            for (int k = i; k <= j; k++)
            {
                swap(a[k], a[j]);
            }
            count++;
        }
        i = count;
    }
}
int main()
{
    char a[100];
    cin.getline(a, 100);
    replace(a);
    cout << a;
}