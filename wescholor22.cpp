#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[1000];
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    vector<int> temp;
    int c = 0;
    int d = 0;
    while (c < n && d < m)
    {
        temp.push_back(a[c]);
        temp.push_back(b[d]);
        c++;
        d++;
    }
    while (c < n)
    {
        temp.push_back(a[c]);
        c++;
    }
    while (d < m)
    {
        temp.push_back(b[d]);
        d++;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i];
        cout << endl;
    }
}