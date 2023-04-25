class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 10)
            {
                ans.push_back(nums[i]);
            }
            else
            {
                int val = nums[i];
                string num;
                while (val != 0)
                {
                    num += (val % 10 + '0');
                    val = val / 10;
                }
                for (int i = num.size() - 1; i >= 0; i--)
                {
                    ans.push_back(nums[i] - '0');
                }
            }
        }
    }
};