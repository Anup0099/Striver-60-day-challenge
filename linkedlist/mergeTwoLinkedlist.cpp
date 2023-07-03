#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
    int Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

ListNode *mergeKLists(vector<ListNode*>&lists){
    int n= lists.size();
    if(n==0)return 0;
    return partition(0,n-1,lists);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}