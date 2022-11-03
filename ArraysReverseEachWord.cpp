#include <bits/stdc++.h>
using namespace std;
void reverse(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
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
    reverse(a);
    cout << a;
}