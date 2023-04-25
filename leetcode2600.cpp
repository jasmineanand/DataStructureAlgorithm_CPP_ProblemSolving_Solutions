#include <bits/stdc++.h>
using namespace std;
int main()
{
    class Solution
    {
    public:
        int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
        {
            string s = "";
            int ans = 0;
            int i, j, l;
            for (int i = 0; i < numOnes; i++)
            {
                s[i] = '1';
            }
            for (int j = i; j < (numOnes + numZeros); j++)
            {
                s[j] = '0';
            }
            for (int l = j; l < (numOnes + numZeros + numNegOnes); l++)
            {
                s[l] = '-1';
            }
            for (int m = 0; m < k; m++)
            {
                ans = ans + s[m];
            }
            return ans;
        }
    };
}