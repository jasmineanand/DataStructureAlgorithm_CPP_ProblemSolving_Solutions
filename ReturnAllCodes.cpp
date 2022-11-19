#include <bits/stdc++.h>
using namespace std;
string keypad[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
void code(string a)
{
    char ch = a[0];
    string b = keypad[ch - '0'];
    for (int i = 0; i < b.length(); i++)
    {
    }
}
int main()
{
    string a;
    cin >> a;
    code(a);
}