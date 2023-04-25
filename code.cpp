#include <bits/stdc++.h>
using namespace std;
/*
[17:07] Mohit Jain
Find length of the largest valid substring of parentheses from a given string.

[17:07] Mohit Jain
"(()" = 2; ")()())" = 4; "())(())" = 4
O(n^2)


[(, ((, ((), (, (), )]
[1, 2, 1]

()- >2   (0)
(()) -> 4

(-> +1
)-> -1



())(())"

*/

int valid_string_length(string &checkstring)
{
    int n = checkstring.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (checkstring[i] == '(')
            sum += 1;
        else
            sum -= 1;
        if (sum < 0)
        {
            return INT_MIN;
        }
    }
    if (sum == 0)
    {
        return n;
    }
    else
    {
        return INT_MIN;
    }
}

int main()
{
    // string s = "(()";
    string s = "(()";
    int n = s.size();
    // vector<string> allstring;
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     string temp;
    //     for (int j = i; j < n; j++)
    //     {
    //         /* code */
    //         temp += s[j];
    //         allstring.push_back(temp);
    //     }
    // }
    // for (auto s : allstring)
    // {
    //     cout << s << " ";
    // }
    // cout << endl;

    // int ans = 0;

    // for (auto s : allstring)
    // {
    //     ans = max(ans, valid_string_length(s));
    // }
    // cout << ans << endl;

    stack<int> st;
    st.push(-1);
    int optimisedans = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (s[i] == '(')
        {
            st.push(i);
        }
        else
        {
            st.pop();
            if (st.empty())
            {
                st.push(i);
            }
            else
            {
                optimisedans = max(optimisedans, i - st.top());
            }
        }
    }
    cout << optimisedans << endl;

    return 0;
}