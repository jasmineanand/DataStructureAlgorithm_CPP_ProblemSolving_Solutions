#include <bits/stdc++.h>
using namespace std;
void print()
{
}
void subsets(int a[], int count, int n)
{
    if (count == n)
    {
        print(subsets);
        return;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    subsets(a, 0, n, );
}