#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *prev, *next;
    int val;
    
};

void insert(int x, Node *head)
{
    Node *newData = new Node();
    newData->val = x;
    newData->prev = NULL;
    newData->next = head;
    if (head != NULL)
    {
        head->prev = newData;
        head = newData;
    }
}
void display(Node *head)
{
    Node *pt;
    pt = head;
    while (pt != NULL)
    {
        cout << pt->val << " ";
        pt = pt->next;
    }
}
int main()
{
    Node *head=NULL;
    insert(4,head);
    insert(5,head);
    insert(6,head);
    display(head);
    
    
}