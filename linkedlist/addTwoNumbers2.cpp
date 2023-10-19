#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x = 0)
    {
        val = x;
        next = NULL;
    }
};
ListNode *reverse(ListNode *head)
{
    if (head || head->next == NULL)
        return head;
    ListNode *prev = NULL, *curr = head, *next = NULL;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
    }
    return prev;
}
ListNode *addTwoNUmber(ListNode *l1, ListNode *l2)
{
    ListNode *l1 = reverse(l1);
    ListNode *l2 = reverse(l2);
    int sum = 0, carry = 0;
    ListNode *ans = new ListNode();
    while (l1 != NULL || l2 != NULL)
    {
        if (l1)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        ans->val = sum % 10;
        carry = sum / 10;
        ListNode *newNode = new ListNode(carry);
        newNode->next = ans;
        ans = newNode;
        sum = carry;
    }
    return carry == 0 ? ans->next : ans;
}
ListNode *add(ListNode *l1, ListNode *l2)
{
    ListNode *temp = new ListNode();
    ListNode *dummy = temp;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry)
    {
        int sum = 0;
        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum / 10;
        ListNode *newNode = new ListNode(sum % 10);
        temp->next = newNode;
        temp = temp->next;
    }

    return dummy->next;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}