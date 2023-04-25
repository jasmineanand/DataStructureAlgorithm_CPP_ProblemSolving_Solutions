#include <bits/stdc++.h>
using namespace std;
class name
{

    int nums1[1000];
    int nums2[1000];
    int k;

    if (k == 0)
    {
        if (nums1 == nums2)
            return 0;
        else
            return -1;
    }
    int n = nums1.size();
    int dec, inc = 0;
    for (int i = 0; i < n; i++)
    {
        int d = abs(nums1[i] - nums2[i]);
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
        return inc;
    else
        return -1;
}
