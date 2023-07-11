#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):
}
bool isSymmertric(TreeNode* root1,TreeNode *root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1->val==root2->val){
        return isSymmertric(root1->left,root->right) && isSymmertric(root1->right,root2->left);
     }
     else{
        return false;
     }
     

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}