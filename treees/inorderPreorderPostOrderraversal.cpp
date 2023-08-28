#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};


vector<int>pperpostin(TreeNode *root){
    stack<pair<TreeNode *,int>>st;
    st.push({root,1});
    vector<int>pre,post,in;
    if(root==NULL){
        return ;
    }
    while(!st.empty()){
        auto it= st.top();
        st.pop();
        if(it.second==1){
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL){
                st.push({it.first->left,1});

            }else{
                post.push_back(it.first->val);
            }
        }
        else if(it.second==2){
            in.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL){
                st.push({it.first->right,1});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}