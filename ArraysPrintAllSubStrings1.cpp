#include <bits/stdc++.h>
using namespace std;
void print(char a[])
{
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                {
                    cout << a[k];
                }
                        }
            cout << endl;
        }
    }
}
int main()
{
    char a[100];
    cin >> a;
    print(a);
}