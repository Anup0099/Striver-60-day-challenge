#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
int minDiff = INT_MAX;
    
    void inOrder(TreeNode* root, TreeNode* &prev) {
        
        if(root == NULL)
            return;
        
        inOrder(root->left, prev);
        
        if(prev != NULL) {
            minDiff = min(minDiff, root->val - prev->val);
        }
        
        prev = root;
        
        inOrder(root->right, prev);
        
    }
    
    int getMinimumDifference(TreeNode* root) {
        TreeNode* prev = NULL;
        inOrder(root, prev);
        return minDiff;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}