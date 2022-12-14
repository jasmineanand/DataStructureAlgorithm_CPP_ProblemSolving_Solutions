#include <bits/stdc++.h>
using namespace std;

/* For a given array arr[],
returns the maximum j – i such that
arr[j] > arr[i] */
int maxIndexDiff(int arr[], int n)
{
    int leftMin[n];
    leftMin[0] = arr[0];
    for (int i = 1; i < n; i++)
        leftMin[i] = min(leftMin[i - 1], arr[i]);

    // leftMin[i] = min{ arr[0...i] }

    int maxDist = INT_MIN;
    int i = n - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (arr[j] >= leftMin[i])
        {
            maxDist = max(maxDist, j - i);
            i--;
        }
        else
            j--;
    }

    return maxDist;
}

// Driver Code
int main()
{
    int arr[] = {3, 4, 42, 30, 1, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxDiff = maxIndexDiff(arr, n);
    cout << maxDiff;
    return 0;
}

// This code is contributed by Sourashis Mondal
