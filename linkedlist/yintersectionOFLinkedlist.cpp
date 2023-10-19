#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *temp1 = headA;
    ListNode *temp2 = headB;
    while (temp1 != temp2)
    {
        // here we are checking if temp1 is null then we are assigning it to headB and vice versa while loop will run till temp1 and temp2 are not equal to each other
        if (temp1 == NULL)
        {
            temp1 = headB;
        }
        else
        {
            temp1 = temp1->next;
        }
        if (temp2 == NULL)
        {
            temp2 = headA;
        }
        else
        {
            temp2 = temp2->next;
        }
    }
    return temp1;
    // time complextiy will o(m*n) because we are traversing both the linked list till we get the intersection point
}
int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here intersection point of two linked list
    unordered_map<Node *, int> mp;
    while (head1 != NULL)
    {
        mp[head1]++;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        if (mp[head2] == 1)
        {
            return head2->data;
        }
        head2 = head2->next;
    }
    return -1;
    // time complexity will be o(m+n) and space complexity will be o(m) where m is the size of the first linked list
    for(auto it:map)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main() {}