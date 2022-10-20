#include <bits/stdc++.h>
using namespace std;
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
void reverse(int a[], int n)
{
    int val = n;
    for (int i = 0; i < (n - 1) / 2; i++)
    {
        swap(a[i], a[val - 1]);
        val--;
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
    reverse(a, n);
    print(a, n);
}