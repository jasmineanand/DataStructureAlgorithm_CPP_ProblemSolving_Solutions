#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i;
    cin >> n;
    int a[1000];
    for (i = 0; i < n; i++)
        cin >> a[i];
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for (i = 0; i < n; i++)
    {
        largest = max(largest, a[i]);
        smallest = min(smallest, a[i]);
    }
    cout << "largest"
         << " " << largest << endl;
    cout << "smallest"
         << " " << smallest << endl;
}