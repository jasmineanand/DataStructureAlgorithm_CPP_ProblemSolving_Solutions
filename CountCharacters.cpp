#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    c = cin.get();
    int count = 0;
    while (c != '$' && c >= 97 && c <= 122)
    {
        count++;
        c = cin.get();
    }
    cout << count << endl;
}