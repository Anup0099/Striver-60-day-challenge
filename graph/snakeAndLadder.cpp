#include <bits/stdc++.h>
using namespace std;
// Given a 5x6 snakes and ladders board, find the minimum number of dice throws required to reach the destination or last cell (30th cell) from the source (1st cell).

// You are given an integer N denoting the total number of snakes and ladders and an array arr[] of 2*N size where 2*i and (2*i + 1)th values denote the starting and ending point respectively of ith snake or ladder. The board looks like the following.
// Note: Assume that you have complete control over the 6 sided dice. No ladder starts from 1st cell.
 int n;
    
    pair<int, int> getCoord(int s) {
        int row = n-1-(s-1)/n;
        
        int col = (s-1)%n;
        
        if((n%2==1 && row%2==1)||(n%2==0 && row%2==0))
            col = n-1-col;
        
        return make_pair(row, col);
    }
    
    int snakesAndLadders(vector<vector<int>>& board) {
        n = board.size();
        
        int steps = 0;
        queue<int> que;
        
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        visited[n-1][0] = true;
        
        que.push(1);
        vector<bool> seen(n*n+1,false);
        
        
        while(!que.empty()) {
            
            int N = que.size();
            while(N--) {
            
                int x = que.front();
                que.pop();

                if(x == n*n)
                    return steps;

                for(int k = 1; k<=6; k++) {
                    if(x+k > n*n)
                        break;

                    pair<int, int> coord = getCoord(x+k);
                    int r = coord.first;
                    int c = coord.second;
                    if(visited[r][c] == true)
                        continue;

                    visited[r][c] = true;
                    if(board[r][c] == -1)
                        que.push(k+x);
                    else {
                        que.push(board[r][c]);
                    }
                }
            }
            steps++;
        }
        
        return -1;
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}