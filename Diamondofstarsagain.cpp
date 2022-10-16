#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= (n + 1) / 2)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces++;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        j = i - 1;
        while (j >= 1)
        {
            cout << "*";
            j--;
        }
    }
    int i = 1;
         while (i <= (n / 2)
         {
        int spaces = 1}
            while (spaces <= n - i)
            {
        cout << " ";
        spaces++;
            }
            int j = 1;
            while (j <= i)
            {
        cout << "*";
        j++;
            }
            j = i - 1;
            while (j >= 1)
            {
        cout << "*";
        j--;
            }

            cout << endl;
            i++;
}
