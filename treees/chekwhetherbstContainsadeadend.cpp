#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isDeadEnd(Node *root)
{
    if (root == NULL)
        return false;
    map<int, int> map1, map2;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())//level order traversal ? here we are cheching for dead 
    {
        int size = q.size();
        while (size--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left == NULL and temp->right == NULL)
            {
                map1[temp->data]++;
                map2[temp->data]++;
            }
            else if (temp->left == NULL)
            {
                map1[temp->data]++;

                q.push(temp->right);
            }
            else if (temp->right == NULL)
            {
                map1[temp->data]++;

                q.push(temp->left);
            }
            else
            {
                map1[temp->data]++;
                q.push(temp->left);
                q.push(temp->right);
            }
        }
    }
    for (auto it : map2)//here we are checking for leaf node with value 1 and 1+1 and 1-1 if node with value 1 is present in map1 then it is dead end if node with value 2 is present in map1 then it is not dead end because we can go to 1 or 3 from 2 and 
    {
        if (it.first == 1)
        {
            if (map1.find(it.first + 1) != map1.end())
            {
                return true;
            }
        }
        else if (it.first == INT_MAX)//
        {
            if (map1.find(it.first - 1) != map1.end())
            {
                return true;
            }
        }
        else
        {
            if (map1.find(it.first - 1) != map1.end() and map1.find(it.first + 1) != map1.end())//
            {
                return true;
            }
        }
        }
    return false;
}
int main() {}