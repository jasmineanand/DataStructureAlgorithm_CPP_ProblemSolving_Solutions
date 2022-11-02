#include <bits/stdc++.h>
using namespace std;
void reverse(char a[])
{
    int len = strlen(a);
    int j = len - 1;
    int i = 0; /*
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

    for (i = 0; i < len; i++)
    {
        for (j = 0; a[j] != ' '; j++)
        {
            int k;
            for (k = j; k < j; k++)
            {
                swap(a[k], a[j]);
                j++;
            }
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