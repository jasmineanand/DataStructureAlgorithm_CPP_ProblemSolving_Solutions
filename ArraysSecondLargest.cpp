#include <bits/stdc++.h>
using namespace std;
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
    int max = INT_MIN;
    int sec_max = INT_MIN;
    int tri_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && a[i] == a[j])
            {
                for (int i = 0; i < n; i++)
                {
                    if (a[i] >= tri_max)
                    {
                        tri_max = sec_max;
                        sec_max = max;
                        max = a[i];
                    }
                }
            }
        }
    }

    if (i == n)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                sec_max = max;
                max = a[i];
            }
        }
    }
    cout << sec_max;
}