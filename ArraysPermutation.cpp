#include <bits/stdc++.h>
using namespace std;
bool checkfreqsame(int *frequency1, int *frequency2)
{
    for (int i = 0; i < 26; i++)
    {

        if (frequency1[i] != frequency2[i])
        {
            return false;
        }
    }
    return true;
}
void permutation(char a[], char b[])
{
    int i;
    int len_1 = strlen(a);

    int len_2 = strlen(b);

    if (len_1 != len_2)
    {
        cout << "false";
    }
    int frequency1[26] = {0};
    int frequency2[26] = {0};
    for (i = 0; i < len_1; i++)
    {
        frequency1[a[i] - 'a']++;
    }

    for (i = 0; i < len_2; i++)
    {
        frequency2[b[i] - 'a']++;
    }

    if (checkfreqsame(frequency1, frequency2))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
int main()
{
    char a[100];
    cin >> a;
    char b[100];
    cin >> b;
    permutation(a, b);
}