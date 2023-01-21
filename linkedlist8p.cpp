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
        this->next = NULL;
    }
};
node *input()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *n1 = new node(data);
        if (head == NULL)
        {
            head = n1;
        }
    }
}
