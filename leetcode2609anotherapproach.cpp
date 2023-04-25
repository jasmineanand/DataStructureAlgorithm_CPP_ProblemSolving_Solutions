#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {

        vector<int> ans;
        int max_one = 0;
        int max_one_index = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < mat[0].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    count++;
                }
                if (count > max_one)
                {
                    max_one = count;
                    max_one_index = i;
                }
            }
        }
        a[0] = max_one_index;
        a[1] = max_one;
        ans.push_back(a[0]);
        ans.push_back(a[1]);
    }
};

class Solution
{
public:
    vector<int> evenOddBit(int n)
    {
        string s;
        if (n != 0)
        {
            int x = n % 2;
            s = to_string(x);
        }
    }
};