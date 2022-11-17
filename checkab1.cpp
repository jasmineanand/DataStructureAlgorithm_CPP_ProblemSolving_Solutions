// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to match whether there are always n consecutive b's
// followed by n consecutive a's throughout the string
int matchPattern(string s)
{
    int count = 0;
    int n = s.length();

    // Traverse through the string
    int i = 0;
    while (i < n)
    {

        // Count a's in current segment
        while (i < n && s[i] == 'a')
        {
            count++;
            i++;
        }

        // Count b's in current segment
        while (i < n && s[i] == 'b')
        {
            count--;
            i++;
        }

        // If both counts are not same.
        if (count != 0)
            return false;
    }

    return true;
}

// Driver code
int main()
{
    string s = "bb";
    if (matchPattern(s) == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
