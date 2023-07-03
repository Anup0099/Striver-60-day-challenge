#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
} ListNode *mergeTwoSortedList(ListNode *l1, ListNode *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;
    if (l1->val < l2->val)
    {
        l1->next = mergeTwoSortedList(l1->next, l2);
        return l1;
    }
    else
    {
        l2->next = mergeTwoSortedList(l1, l2->next);
        return l2;
    }
    return NULL;
}
ListNode *partition(int start, int end, vector<ListNode *> &lists)
{
    if (start > end)
        return NULL;
    if (start == end)
    {
        return lists[start];
    }
    int mid = start + (end - start) / 2;
    ListNode *l1 = partition(start, mid, lists);
    ListNode *l2 = partition(mid + 1, end, lists);
    return mergeTwoSortedList(l1, l2);
}
ListNode *mergeKLists(vector<ListNode *> &lists)
{
    int n = lists.size();
    if (n == 0)
        return NULL;
    return partition(0, n - 1, lists);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}