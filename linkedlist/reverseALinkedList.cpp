#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
Node *reverseLinkedList(Node *head)
{
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        Node *next = temp->next;
        temp->next = prev;
        prev = temp;
        temp=temp->next;
    }
    return prev;
}
int main()
{
}