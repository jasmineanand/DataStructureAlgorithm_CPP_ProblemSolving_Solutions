#include <iostream>
using namespace std;
int main()
{
    int *p = new int;
    delete p;
    cout << *p;
}