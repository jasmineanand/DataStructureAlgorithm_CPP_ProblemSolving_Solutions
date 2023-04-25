#include <iostream>
using namespace std;

int main()
{
    int x, op, tp;
    cout << "Enter a number" << endl;
    cin >> x;
    op = x % 10;
    cout << "the value in the once place is:" << op << endl;
    tp = x / 10;
    cout << "The value in the tens place is:" << tp << endl;
    return 0;
}