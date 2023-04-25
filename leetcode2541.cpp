#include <bits/stdc++.h>
using namespace std;
int minimum(int nums1[], int nums2[], int k, int n)
{
    if (k == 0)
    {
        if (nums1 == nums2)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    int dec, inc = 0;
    for (int q = 0; q < n; q++)
    {
        int d = abs(nums1[q] - nums2[q]);
        if (d % k != 0)
        {
            return -1;
        }
        if (nums1[q] < nums2[q])
        {
            inc += d / k;
        }
        if (nums1[q] > nums2[q])
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
}
int main()
{
    int n;
    cin >> n;
    int nums1[100];
    for (int i = 0; i < n; i++)

    {
        cin >> nums1[i];
        }
    int m;
    cin >> m;
    int nums2[100];
    for (int j = 0; j < m; j++)
    {
        cin >> nums2[j];
    }
    int k;
    cin >> k;
    minimum(nums1, nums2, k, n);
}