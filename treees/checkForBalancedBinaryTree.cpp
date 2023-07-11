#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *right;
    Node *left;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
}
int maxDepth(Node* root){
    if(root==NULL)return 0;
    int left = maxDepth(root->left);
    if(left==-1)return -1;
    int right= maxDepth(root->right);
    if(right==-1)return -1;
    
    if(abs(lh-rh)>1)return -1; 
    return max(left+right)+1;
    // o(n) time complexity
}
bool isBalanced(Node *root){
    // if(root==NULL)return true;
    // int lh= maxDepth(root->left);
    // int rh= maxDepth(root->right);
    // if(abs(lh-rh)>1)return false;
    // int right= isBalanced(root->right);
    // int left= isBalanced(root->left);
    // if(left || right)return true;
    // return false;o(n*n) time complexity
    if(maxDepth(root)==-1)return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}