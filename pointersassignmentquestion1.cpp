#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    int *p = &a;
    int **q = &p;
    int b = (**q)++ + 4;
    cout << a << " " << b << endl;
    return 0;
}