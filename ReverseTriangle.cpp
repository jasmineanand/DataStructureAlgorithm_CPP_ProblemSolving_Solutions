#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // cout<<"enter n"<<endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces++;
        }
        int stars = 1;
        while (stars <= i)
        {
            cout << "*";
            stars++;
        }
        cout << endl;
        i++;
    }
}
