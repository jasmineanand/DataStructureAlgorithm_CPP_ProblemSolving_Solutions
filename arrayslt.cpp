class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0, j = 0;
        int k = INT_MAX;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
                i++;
            else if (nums2[j] < nums1[i])
                j++;
            else
            {
                if (k > nums2[j])
                {
                    k = nums2[j]
                }
                i++;
                j++;
            }
        }
    }
    return k;
};