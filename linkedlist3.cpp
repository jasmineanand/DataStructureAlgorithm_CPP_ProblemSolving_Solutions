#include <bits/stdc++.h>
using namespace std;
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
    node n1(1);
    node *head = &n1;
    node n2(2);
    n1.next = &n2;
    node n3(3);
    n2.next = &n3;
    node n4(4);
    n3.next = &n4;
    node n5(5);
    n4.next = &n5;
    cout << head->data;
    head = head->next;
    cout << head->data;
    head = head->next;
    cout << head->data;
    head = head->next;
    cout << head->data;
    head = head->next;
    cout << head->data;
}