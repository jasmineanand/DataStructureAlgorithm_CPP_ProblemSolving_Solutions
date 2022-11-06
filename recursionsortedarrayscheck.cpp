#include <bits/stdc++.h>
using namespace std;
bool sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    bool small_output = sorted(a + 1, size - 1);
    if (!small_output)
    {
        return false;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int a[100];
    int i, n;
    cin >> n;
    int size = n;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << sorted(a, n);
}