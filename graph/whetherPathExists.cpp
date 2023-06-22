#include <bits/stdc++.h>
using namespace std;
// Given a grid of size n*n filled with 0, 1, 2, 3. Check whether there is a path possible from the source to destination. You can traverse up, down, right and left.
// The description of cells is as follows:

// A value of cell 1 means Source.
// A value of cell 2 means Destination.
// A value of cell 3 means Blank cell.
// A value of cell 0 means Wall.
// Note: There are only a single source and a single destination.

// Example 1:

// Input: grid = {{3,0,3,0,0},{3,0,0,0,3}
// ,{3,3,3,3,3},{0,2,3,0,0},{3,0,0,1,3}}
// Output: 0
// Explanation: The grid is-
// 3 0 3 0 0
// 3 0 0 0 3
// 3 3 3 3 3
// 0 2 3 0 0
// 3 0 0 1 3
// There is no path to reach at (3,1) i,e at
// destination from (4,3) i,e source.
// Example 2:

// Input: grid = {{1,3},{3,2}}
// Output: 1
// Explanation: The grid is-
// 1 3
// 3 2
// There is a path from (0,0) i,e source to (1,1)
// i,e destination.

// Your Task:
// You don't need to read or print anything. Your task is to complete the function is_Possible() which takes the grid as input parameter and returns boolean value 1 if there is a path otherwise returns 0.
class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
    bool dfs(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &visited )
    {
        if(grid[i][j]==2) return true;
        visited[i][j]=1;
        
        int n = grid.size();
        int m = grid[0].size();
        
        int delrow[]={1, 0, -1, 0};
        int delcol[]={0, 1, 0, -1};
        
        for(int k=0; k<4; k++){
            int nrow = i + delrow[k];
            int ncol = j + delcol[k];
            
            if(nrow>=0  && nrow<n && ncol>=0 && ncol<m){
                if(grid[nrow][ncol]!=0 && visited[nrow][ncol]==0){
                    if(dfs(grid, nrow, ncol, visited)==true){
                        return true;
                    }
                }
                
            }
        }
        return false;
    }
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        
        
        int n = grid.size();
        int m = grid[0].size();
        
        bool ans = false;
        int x; int y;
        vector<vector<int>> visited(n, vector<int>(m, 0));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(grid[i][j]==1){
                    x=i;
                    y=j;
                    break;
                }
            }
        }
        // cout<<source.first<<" "<<source.second<<"\n";
        if(x!=-1 && y!=-1){
        ans = dfs(grid, x, y, visited);
        }
            
        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>> grid = {{3, 0, 3, 0, 0}, {3, 0, 0, 0, 3}, {3, 3, 3, 3, 3}, {0, 2, 3, 0, 0}, {3, 0, 0, 1, 3}};
    cout << is_Possible(grid);
}