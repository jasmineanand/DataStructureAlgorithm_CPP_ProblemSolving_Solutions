#include <bits/stdc++.h>
using namespace std;
void tower(int n, char source, char aux, char destination)
{
    if (n == 1)
    {
        cout << "Move disk " << n << " from rod " << source
             << " to rod " << destination << endl;
        return;
    }
    tower(n - 1, source, destination, aux);
    cout << "Move disk " << n << " from rod " << source
         << " to rod " << destination << endl;
    tower(n - 1, aux, source, destination);
}
int main()
{
    int n;
    cin >> n;
    tower(n, 'a', 'b', 'c');
}