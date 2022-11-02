#include <bits/stdc++.h>
using namespace std;
void reverse(char a[])
{
    int len = strlen(a);
    int k, j, i;
    /*
        while (i < j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        int j = len - 1;
        int i = 0;
        while (i < j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        */
    int count = 0;
    for (i = 0; i < len; i++)
    {
        count = i;
        for (j = 0; a[j] != ' '; j++)
        {
            for (k = i; k <= j; k++)
            {
                swap(a[k], a[j]);
                count++;
            }
        }
        i = count;
    }

    for (i = 0; i < len; i++)
    {
        while (a[j] != ' ')
        {
            swap(a[i], a[j]);
            i++;
            j++;
        }
    }
}
int main()
{
    char a[100];
    cin.getline(a, 100);
    reverse(a);
    cout << a;
}