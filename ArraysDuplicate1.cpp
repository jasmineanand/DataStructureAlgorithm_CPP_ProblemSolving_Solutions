#include <bits/stdc++.h>
using namespace std;
void duplicate(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (i != j && a[i] == a[j])
            {
                cout << a[i] << endl;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    duplicate(a, n);
}