#include <bits/stdc++.h>
using namespace std;
int main()
{
    int S;
    int W;
    int E;
    cin >> S >> W >> E;
    int i = 0;
    while (i >= S && i <= E)
    {
        if (i % W == 0)
        {
            int c = ((5.0 / 9) * (i - 32));

            cout << i << "  " << c << endl;
        }
        i++;
    }
}