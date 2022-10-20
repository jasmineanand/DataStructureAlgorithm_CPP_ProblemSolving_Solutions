#include <bits/stdc++.h>
using namespace std;
void triplet_sum(int a[], int n, int sum)
{
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            int k;
            for (k = 0; k < j; k++)
            {
                if (a[i] + a[j] + a[k] == sum)
                {
                    val++;
                }
            }
        }
    }
    cout << val;
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
    int sum;
    cin >> sum;
    triplet_sum(a, n, sum);
}