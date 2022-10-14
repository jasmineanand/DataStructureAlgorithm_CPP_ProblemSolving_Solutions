#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n >> k;
    int i = 1;
    int sum = 0;
    int product = 1;
    while (i <= n)
    {
        if (k == 1)
        {
            sum = sum + i;
            i++;
        }

        {
            cout << sum;
        }
        else if (k == 2)
        {
            int j = 1;
            while (j <= n)
                product = product * j;
            j++;
        }

        {
            cout << product;
        }
        else
        {
            cout << -1;
        }
    }
    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n >> k;
    int i = 1;
    int sum = 0;
    int product = 1;
    for (k = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    {
        cout << sum;
    }
    for (k = 2; i <= n; i++)
    {
        product = product * i;
    }
    {
        cout << product;
    }
    if (k != 1 && k != 2)
    {
        cout << -1;
    }
    cout << endl;
}
