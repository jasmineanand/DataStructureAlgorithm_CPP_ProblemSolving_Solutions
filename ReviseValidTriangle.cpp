#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if ((a + b) > c)
    {
        cout << "Yes it is valid";
    }
    else if ((b + c) > a)
    {
        cout << "Yes it is valid";
    }
    else if ((c + a) > b)
    {
        cout << "Yes it is valid";
    }
    else
    {
        cout << "No it is not valid";
    }
    cout << endl;
}