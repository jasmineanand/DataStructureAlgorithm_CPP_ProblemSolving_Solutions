#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = i;
    }
    vector<int> arr2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    vector<int> xxx;
    for (int i = 0; i < n; i++)
    {
        int x = mp[arr2[i]];
        int lo = 0;
        int hi = xxx.size() - 1;
        int ans = xxx.size();
        while (lo <= hi)
        {
        }
    }
}