#include <bits/stdc++.h>
using namespace std;
// dynamically
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
int main()
{
    node *n1 = new node(1);
    node *head = n1;
    node *n2 = new node(2);
    n1->next = n2;
    cout << n1->data << " " << n2->data << " " << head->data << endl;
    cout << (*n1).data;
}