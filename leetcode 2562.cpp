class Solution
{
public:
    long long findTheArrayConcVal(vector<int> &nums)
    {
        long long con = 0;
        int n = nums.size();
        if (n == 1)
        {
            return nums[0];
        }
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            long long sum = 0;
            if (i == j)
            {
                sum = nums[i];
            }
            else
            {
                string s = to_string(nums[i]) + to_string(nums[j]);
                sum = stol(s)
            }
            con += sum;
            i++;
            j--;
        }
    }
    return con;
};
