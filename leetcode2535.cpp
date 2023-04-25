class Solution
{
public:
    long long minOperations(vector<int> &nums1, vector<int> &nums2, int k)
    { //[4,3,1,4], [1,3,7,1], k =3
        if (k == 0)
        {
            if (nums1 == nums2)
                return 0;
            else
                return -1;
        }
        long long n = nums1.size();
        long long dec=0, inc = 0;
        for (long long i = 0; i < n; i++)
        {
            long long d = abs(nums1[i] - nums2[i]);
            if (d % k != 0)
            {
                return -1;
            }
            if (nums1[i] < nums2[i])
            {
                inc += d / k;
            }
            if (nums1[i] > nums2[i])
            {
                dec += d / k;
            }
        }

        if (inc == dec)
            return dec;
        else
            return -1;
    }
};