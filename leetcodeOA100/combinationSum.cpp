#include <bits/stdc++.h>
using namespace std;
void f(vector<vector<int>>&ans,vector<int>&temp,int ind,int sum,int n.int k){
    if(sum==n && temp.size()==k){
        ans.push_back(temp);
        return ;

    }
    if(sum>n)return ;
    for(int i=ind;i<=9;i++){
        temp.push_back(i);
        f(ans,temp,i+1,sum+i,n,k);
        temp.pop_back();

    }

}
vector<vector<int>>combinationSum(int k,int n){
    vector<vector<int>>ans;
    vector<int>temp;
    f(ans,temp,1,0,n,k);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}