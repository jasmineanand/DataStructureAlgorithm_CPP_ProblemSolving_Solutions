#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int a[], int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        int current = a[i];
        {
            int j;
            for (j = i - 1; j >= 0; j--)
            {
                if (current < a[j])
                {
                    a[j + 1] = a[j];
                }
                else
                {
                    break;
                }
            }
            a[j + 1] = current;
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
    insertion_sort(a, n);
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}