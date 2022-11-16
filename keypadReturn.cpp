#include <bits/stdc++.h>
using namespace std;
string keypadArr[] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keypad(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }
    char ch = input[0];
    string code = keypadArr[ch - '0'];
    for (int i = 0; i < code.length(); i++)
    {
        keypad(input.substr(1), output + code[i]);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << keypad("n", " ");
}