#include <bits/stdc++.h>
using namespace std;
int putMarblesInBag(vector<int>&weights,int k){
    int n=weights.size();
    vector<int>pairSum(n-1);
    for(int i=0;i<n-1;i++){
        pairSum[i]=weights[i]+weights[i+1];
    }
    sort(pairSum.begin(),pairSum.end());
    int maxSum=0;
    int minSum=0;
    for(int i=0;i<k;i++){
        minSum+=pairSum[i];
        maxSum+=pairSum[n-2-i];
    }
    return maxSum-minSum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}