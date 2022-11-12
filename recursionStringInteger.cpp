#include <bits/stdc++.h>
using namespace std;
int stringToNumber(char input[], int last)
{
    if (last == 0)
    {
        return input[last] - '0';
    }
    int smallAns = stringToNumber(input, last - 1);
    int a = input[last] - '0';
    return smallAns * 10 + a;
}
int main()
{
    char input[50];
    cin >> input;
    int len = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }
    cout << stringToNumber(input, len - 1) << endl;
}