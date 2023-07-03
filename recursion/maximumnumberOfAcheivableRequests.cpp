#include <bits/stdc++.h>
using namespace std;
int result;
void solve(int idx,int count,vector<int>&requests,vector<int>resultant){
    if(idx==requests.size()){
        for(int i=0;i<resultant.size();i++){
            bool allzero=true;
            if(resultant[i]!=0){
                allzero=false;
                break;  
            }
        }
        if(allzero==true){
            return  max(result,count);
        }
        return ;

    }
    int from= requests[idx][0];
    int to = requests[idx][1];
    resultant[from]=resultant[from]-1;
    resultant[to]= resultant[to]+1;
    solve(idx+1,count+1,requests,resultant);
    resultant[from]++;
    resultant[to]--;
    solve(idx+1,count,requests,resultant);
}
int maximumNumberOfTransfer(int n,vector<int>&requests){
    int n=requests.size();
    vector<int>resultant(n,0);
    return solve(idx,count,requests,resultant);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}