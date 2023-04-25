#include <bits/stdc++.h>;
using namespace std;

class Solution
{
public:
    int maxDivScore(vector<int> &nums, vector<int> &divisors)
    {
        int n = divisors.size();
        int m = nums.size();
        int k = INT_MIN;
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < m; j++)
            {
                if ((nums[i]) % (divisors[j]) == 0)
                {
                    count++;
                }
            }
            if (val < count)
            {
                val = count;
                k = divisors[i];
            }
            if (count == val && divisors[i] < k)
            {
                k = divisors[i];
            }
        }
        return k;
    }
};