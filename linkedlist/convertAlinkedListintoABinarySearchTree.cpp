#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode *sortedListToBst(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev = NULL;
    if (head == NULL)
    {
        return NULL;
    }
    while (fast != NULL and fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;

    TreeNode *root = new TreeNode(slow->val);
    root->left = sortedListToBst(head);
    root->right = sortedListToBst(slow->next);
    return root;
}
int main() {
    
}