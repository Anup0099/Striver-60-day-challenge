#include <bits/stdc++.h>
using namespace std;
// u are given the head of a non-empty linked list representing a non-negative integer without leading zeroes.

// Return the head of the linked list after doubling it.

// Example 1:

// Input: head = [1,8,9]
// Output: [3,7,8]
// Explanation: The figure above corresponds to the given linked list which represents the number 189. Hence, the returned linked list represents the number 189 * 2 = 378
struct ListNode
{

    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *doubleIt(ListNode *head)
{
    ListNode *temp = head;
    //multiply by 2
    vector<int> v;
    while (temp)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }
    int carry = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int x = v[i] * 2 + carry;
        v[i] = x % 10;
        carry = x / 10;
    }
    if (carry)//if carry is not 0
        v.insert(v.begin(), carry);
    //create a new list
    ListNode *newHead = new ListNode(v[0]);
    ListNode *newTemp = newHead;
    for (int i = 1; i < v.size(); i++)
    {
        newTemp->next = new ListNode(v[i]);
        newTemp = newTemp->next;
    }
    return newHead;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}