#include <bits/stdc++.h>
using namespace std;

// Test case 1

// Test case 2
// int n = 3;
// vector<int> S = {5, 10, 25};

int main()
{
    // Sort the set in non-decreasing order
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int n;
        cin >> n;
        vector<int> S(n);
        for (int i = 0; i < n; i++)
        {
            cin >> S[i];
        }

        sort(S.begin(), S.end());

        // Keep track of the maximum size of the set S and the current size of the set S
        int max_size = S.size();
        int cur_size = max_size;

        // Iterate through the elements of S
        for (int x : S)
        {
            // Check if there exists a y such that x-y is not in S
            for (int y : S)
            {
                if (y < x && find(S.begin(), S.end(), x - y) == S.end())
                {
                    // Add x-y to the set
                    S.push_back(x - y);
                    // Update the current size of the set S
                    cur_size++;
                    // If the current size is equal to the maximum size, break out of the loop
                    if (cur_size == max_size)
                        break;
                }
            }
            // If the current size is equal to the maximum size, break out of the loop
            if (cur_size == max_size)
                break;
        }

        // The maximum possible number of integers in S
        cout << S.size() << endl;
    }

    return 0;
}
