#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
bool isPalindrome(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    temp = head;
    int mid = count / 2;
    while (mid--)
    {
        temp = temp->next;
    }
    vector<int> v;
    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    temp = head;
    int i = v.size() - 1;
    while (i >= 0)
    {
        if (temp->data != v[i])
        {
            return false;
        }
        temp = temp->next;
        i--;
    }
    return true;
}
int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(1);
    cout << isPalindrome(head);
}