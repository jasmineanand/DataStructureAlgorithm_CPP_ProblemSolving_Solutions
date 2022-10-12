#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char startChar = 'A' + n - 1;
            char ch = startChar - i + j;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}