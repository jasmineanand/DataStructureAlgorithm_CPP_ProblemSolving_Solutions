#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minNumber(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        int w = INT_MAX;
        int t = INT_MAX;
        int g = INT_MAX;
        int n = nums1.size();
        int m = nums2.size();
        string s;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (nums1[i] == nums2[j])
                {
                    if (nums1[i] < g)
                    {
                        g = nums1[i];
                    }
                }
            }
        }
        if (g != INT_MAX)
        {
            s = to_string(g);
            return stoi(s);
        }
        for (int i = 0; i < n; i++)
        {
            if (nums1[i] < w)
            {
                w = nums1[i];
            }
        }
        for (int j = 0; j < m; j++)
        {

            if (nums2[j] < t && t != w)
            {
                t = nums2[j];
            }
        }
        if (w == t)
        {
            s = to_string(w);
        }
        if (w < t)
        {
            s = to_string(w) + to_string(t);
        }
        else
        {
            s = to_string(t) + to_string(w);
        }
        return stoi(s);
    }
};

class Solution
{
public:
    int sumOfMultiples(int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 3 == 0)
            {
                sum = sum + i;
            }
            if (i % 5 == 0)
            {
                sum = sum + i;
            }
            if (i % 7 == 0)
            {
                sum = sum + i;
            }
        }
        return sum;
    }
};