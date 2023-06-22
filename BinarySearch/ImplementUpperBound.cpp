#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int>&v,int target){
    int n=  v.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]<=target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}