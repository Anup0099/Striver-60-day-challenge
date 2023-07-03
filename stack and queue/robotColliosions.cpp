#include <bits/stdc++.h>
using namespace std;
void performOperation(vector<int>&healths,stack<int>&s,int i){
   while(!s.empty()){
    int top= st.top();
    s.pop();
    if(healths[top]>healths[i]){
        healths[top]-=1;
        healths[i]=0;
        s.push(top);
        return ;
    }else if(healths[top]==healths[i]){
        healths[i]=0;
        healths[top]=0;
        return ;
    }else{
        healths[i] -=1;
        healths[top]=0;
    }
   }

}
  vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
       int n= positions.size();
       stack<int>s;
       vector<int>result(n,0);
       for(int i=0;i<n;i++){
            result[i]=i;
       }
       sort(result.begin(),result.end(),[&](int a,int b){
           return positions[a]<positions[b];
       });
       for(int j=0;j<n;j++){
        int i= result[j];
        if(directions[i]=='L' and s.empty())continue;
        else if(directions[i]=='R')s.push(i);
        else{
            performOperation(healths,s,i);
        }
       }
       vector<int>ans;
       for(int x:healths){
              if(x>0)ans.push_back(x);
       }
       return ans;
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}