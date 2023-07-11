#include <bits/stdc++.h>
using namespace std;
void f(int i,int j,vector<vector<int>>&triangle,int n){
    if(i==n-1)return triangle[i][j];
    int d = triangle[i][j] + f(i+1,j,triangle,n);
    int r= triangle[i][j] + f(i+1,j+1,triangle,n);
    return min(d,r);

}
int triangle(vector<vector<int>>&triangle){
    int n= triangle.size();
  return f(0,0,triangle,n);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>>triangle={{2},{3,4},{6,5,7},{4,1,8,3}};






}