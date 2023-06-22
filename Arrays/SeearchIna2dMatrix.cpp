#include <bits/stdc++.h>
using namespace std;
int search(vector<vector<int>>&grid,int target){
    int n= grid.size();
    int m=grid[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
//binary search
int search(vector<vector<int>>&grid,int target){
    int n= grid.size();
    int m=grid[0].size();
    int low=0,high=n*m-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(grid[mid/m][mid%m]==target){
            return 1;
        }
        else if(grid[mid/m][mid%m]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}