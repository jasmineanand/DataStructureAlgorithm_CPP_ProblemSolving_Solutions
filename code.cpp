// swapping two numbers
// a -> 10 & b->20
#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    cout << "Old Value a: " << a << " Old Value b: " << b << endl;
    Swap(a, b);
    cout << "New Value a: " << a << " New Value b: " << b << endl;
}