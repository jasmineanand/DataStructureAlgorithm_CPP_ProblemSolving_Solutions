#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int duplicate(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                return a[i];
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int i;
    int a[100];
    for (i = 0; i, n; i++)
    {
        cin >> a[i];
    }
    cout << duplicate(a, n);
}
