#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *deleteMiddle(ListNode *head)
{
    // int count = 0;
    // ListNode *temp = head;
    // while (temp != NULL)
    // {
    //     count++;
    //     temp = temp->next;
    // }
    // if(count==1)
    // {
    //     return head;
    // }
    // int mid = count / 2;
    // // lower bound
    // ListNode *prev = NULL;
    // ListNode *curr = head;
    // while (mid--)
    // {
    //     prev = curr;
    //     curr = curr->next;
    // }
    // prev->next = curr->next;
    // return head;
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev = NULL;
    while (head == NULL or head->next == NULL)
    {
        return NULL;
    }
    while (fast != NULL and fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = slow->next;
    delete (slow);
    return head;
}
int main() {}