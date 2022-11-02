#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int k;
    int n;
    cin >> n;
    int a[1000];
    int maxSum = 0;
    int CurrentSum;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            CurrentSum = 0;
            for (int k = i; k <= j; k++)
            {
                CurrentSum += a[k];
            }
            if (CurrentSum > maxSum)
            {
                maxSum = CurrentSum;
            }
        }
    }
    cout << maxSum;
}
