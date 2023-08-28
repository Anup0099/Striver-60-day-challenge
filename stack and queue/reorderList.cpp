#include <bits/stdc++.h>
using namespace std;
// You are given the head of a singly linked-list. The list can be represented as:

// L0 → L1 → … → Ln - 1 → Ln
// Reorder the list to be on the following form:

// L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
// You may not modify the values in the list's nodes. Only nodes themselves may be changed.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << ",";
        temp = temp->next;
    }
    cout << "\n";
}
void reorderList(ListNode *head)
{
    vector<int> copy;
    vector<int> copy2;

    ListNode *temp = head;
    while (temp != NULL)
    {
        copy.push_back(temp->val);
        temp = temp->next;
    }
    int n = copy.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        copy2.push_back(copy[i]);
        copy2.push_back(copy[j]);
        i++;
        j--;
    }
    if (i == j)
    {
        copy2.push_back(copy[i]);
    }
    temp = head;
    for (int i = 0; i < n; i++)
    {
        temp->val = copy2[i];
        temp = temp->next;
    }

    print(head);
}
void ReorderList(ListNode *head)
{
    deque<ListNode *> dq;
    ListNode *temp = head;
    while (temp != NULL)
    {
        dq.push_back(temp);
        temp = temp->next;
    }
    vector<int> ans;
    int n = dq.size();
    temp = head;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            temp->next = dq.front();
            int x = dq.front()->val;
            cout << x;

            dq.pop_front();
        }
        else
        {
            temp->next = dq.back();
            int y = dq.back()->val;
            cout << y;
            ans.push_back(y);
            dq.pop_back();
        }
    }
    temp->next = NULL;
    ListNode *temp2 = head;
    for (int i = 0; i < n; i++)
    {
        temp2->val = ans[i];
        temp2 = temp2->next;
    }
    print(head);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ListNode *head = new ListNode(1);
    ListNode *temp = head;
    temp->next = new ListNode(2);
    temp = temp->next;
    temp->next = new ListNode(3);
    temp = temp->next;
    temp->next = new ListNode(4);
    temp = temp->next;
    temp->next = new ListNode(5);
    ReorderList(head);
}