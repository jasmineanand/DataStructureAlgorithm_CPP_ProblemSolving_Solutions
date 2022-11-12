#include <bits/stdc++.h>
using namespace std;
int stringToNumber(char a[], int last)
{
    if (last == 0)
    {
        return a[last] - '0';
    }
    int smallAns = stringToNumber(a, last - 1);
    int b = a[last] - '0';
    return smallAns * 10 + b;
}
int main()
{
    char a[50];
    cin >> a;
    int len = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    cout << stringToNumber(a, len - 1) << endl;
}