#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(data){
        
    }
}
vector<vector<int>>solve(node* root){
    vector<vector<int>>ans;
    if(root==NULL)return ans;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
       int n= q.size();
       vector<int>level;
       
        for(int i=0;i<n;i++){
            node* temp=q.front();
            q.pop();
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL)q.push(temp->right);
            level.push_back(temp->data);
            
        }
        ans.push_back(level);

    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}