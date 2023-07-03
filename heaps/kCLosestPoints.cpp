#include <bits/stdc++.h>
using namespace std;
// bool mycomp(vector<int>&a,vector<int>&b){
//     return a[0]*a[0]+a[1]*a[1]<b[0]*b[0]+b[1]*b[1];
// }
vector<vector<int>>kClosest(vector<vector<int>>&points,int k){
    int n= points.size();
    priority_queue<pair<int,pair<int,int>>pq;
   for(int i=0;i<n;i++){
    int x= points[i][0];
    int y= points[i][1];
    int dist= x*x+y*y;
    pq.push({dist,{x,y}});
    if(pq.size()>k){
        pq.pop();

    }
   }
   vector<vector<int>>ans;
   for(int i=0;i<k;i++){
    auto p= pq.top();
    pq.pop();
    int x= p.second.first;
    int y= p.second.second;
    ans.push_back({x,y});
   }
   return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}