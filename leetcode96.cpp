if (k = 0)
{
    return nums1 = nums2 ? 0 : -1;
}
int n = nums1.size();
int dec, inc = 0;
for (int i = 0; i < n; i++)
{
    if (nums1[i] == nums2[i])
    {
        continue;
    }
    int d = abs(nums1[i] - nums2[i]);
    if (d % k != 0)
    {
        return -1;
    }
    if (nums1[i] < nums2[i])
    {
        inc += d / k;
    }
    else
    {
        dec += d / k;
    }
}
if (inc == dec)
{
    return inc;
}
else
{
    return -1;
}
