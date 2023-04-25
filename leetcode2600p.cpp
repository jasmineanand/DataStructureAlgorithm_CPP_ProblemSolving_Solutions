#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numOnes;
    int numZeros;
    int numNegOnes;
    int k;
    cin >> numOnes >> numZeros >> numNegOnes >> k;
    {
        string s = "";
        int ans = 0;
        int i, j, l, m;
        for (i = 0; i < numOnes; i++)
        {
            s[i] = '1';
            cout << s[i];
        }

        for (j = i; j < (numOnes + numZeros); j++)
        {
            s[j] = '0';
            cout << s[j];
        }

        for (l = j; l < (numOnes + numZeros + numNegOnes); l++)
        {
            s[l] = '-1';
            cout << s[l];
        }

        for (m = 0; m < k; m++)
        {
            // cout << (s[m] - '0');
            //  cout << ans << endl;
            //  cout << "yo";
            //  cout << s[m] << endl;

            ans += (s[m] - '0');
        }
        // cout << ans;
    }
}