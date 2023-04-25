#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ans = "";
    int n;    // string O(n)
    cin >> n; // long long-?>? 64 bits to_stoi
    while (n != 0)
    {
        int rem = n % 10;
        n = n / 10;
        long long temp = rem * rem;
        ans = to_string(temp) + ans; // O(n), O(1)
        cout << ans << endl;
    }

    int num = 0;
    for (int i = 0; i < ans.length(); i++)
    {
        num = num * 10 + (int(ans[i] - 48));
    }
    cout << num;
}
