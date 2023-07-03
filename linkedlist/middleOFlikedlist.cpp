#include <bits/stdc++.h>
using namespace std;
class Node
{
    int data;
    Node *next;
    int Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *middle(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *fast = NULL;
    Node *slow = NULL;
    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}