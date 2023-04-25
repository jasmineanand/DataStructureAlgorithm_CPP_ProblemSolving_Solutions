#include <bits/stdc++.h>
using namespace std;
int main(){
    class Solution{
        public :
            int findTheLongestBalancedSubstring(string s){
                int ans = 0;
int n = s.size();
int i = 0;
if (s[i] != 0)
{
    return 0;
}
for (int i = 0; i < n;)
{
    int zeros = 0;
    int ones = 0;
    while (i < n && s[i] == '0')
    {
        zeros++;
        i++;
    }
    while (i < n && s[i] == '1')
    {
        ones++;
        i++;
    }
    int len = 2 * min(zeros, ones);
    ans = max(ans, len);
}
}
return ans;
}
}
;