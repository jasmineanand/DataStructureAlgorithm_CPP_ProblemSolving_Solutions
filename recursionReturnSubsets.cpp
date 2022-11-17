#include <bits/stdc++.h>
using namespace std;
void PrintAllSubsets(int a[], int i, int n, int subset[], int j)
{
    if (i == n)
    {
        int idx = 0;
        while (idx < j)
        {
            cout << subset[idx] << ' ';
            idx++;
        }
        cout << endl;
        return;
    }

    PrintAllSubsets(a, i + 1, n, subset, j);
    subset[j] = a[i];
    PrintAllSubsets(a, i + 1, n, subset, j + 1);
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
    int subset[100];
    PrintAllSubsets(a, 0, n, subset, 0);
}