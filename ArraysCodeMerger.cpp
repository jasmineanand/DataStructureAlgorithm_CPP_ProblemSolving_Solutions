#include <bits/stdc++.h>
using namespace std;
void code(int a[], int n, int q, int b[])
{ /*

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < q; j++)
         {
             if (a[i] < b[j])
             {
                 cout << a[i] << endl;
                 i++;
                 j--;
             }

             if (a[i] > b[j])
             {
                 cout << b[j] << endl;
             }
         }
     }
 */
    int j = 0;
    int i = 0;
    while (i < n && j < q)
    {
        if (a[i] < a[j])
        {
            cout << a[i] << endl;
            i++;
        }
        else
        {
            cout << b[j] << endl;
            j++;
        }
    }
}

int main()
{
    int n, q, j;
    cin >> n;
    int a[200];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    int b[200];
    for (int j = 0; j < q; j++)
    {
        cin >> b[i];
    }
    code(a, n, q, b);
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << " ";
            }
        }
    }
}