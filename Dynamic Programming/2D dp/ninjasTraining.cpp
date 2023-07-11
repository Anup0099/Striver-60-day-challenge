#include <bits/stdc++.h>
using namespace std;
int f(vector<vector<int>>&points,int ind,int days){
    if(ind==0){
        int maxi=0;
        for(int task=0;task<3;task++){
            maxi=max(maxi,points[ind][task]);
        }
        return maxi;
    }
    int maxi=0;
    for(int task=0;task<3;task++){
        if(task!=last){
            int points=points[day][task]+f(points,ind-1,task);
            maxi= max(maxi,points);
        }
    }
    return maxi;
}
int ninjasTraining(int n,vector<vector<int>>&points){
    int n=points.size();
    int m= points[0].size();
    int ind=0;
    int days=0;
    return f(point,n-1,3);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}