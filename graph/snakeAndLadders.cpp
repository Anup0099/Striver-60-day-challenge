#include <bits/stdc++.h>
using namespace std;
int n;
int m;
pair<int, int> getCord(int val)
{
    int row = (val - 1) / n;
    int rowbegin = (n - 1) - row;
    int col = (val - 1) % n;
    if (n % 2 == 1 and rowbegin % 2 == 1 || n % 2 == 0 and rowbegin % 2 == 0)
        return {rowbegin, col};
    else
        return {rowbegin, n - 1 - col};
}
int snakesAndLadders(vector<vector<int>> &board)
{
    n = board.size();
    m = board[0].size();
    int steps = 0;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<int> q;
    visited[n - 1][0] = true;
    q.push(1);
    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            int temp = q.front();
            q.pop();
            if (temp == n * m)
                return steps;
            for (int i = 1; i <= 6; i++)
            {
                int next = temp + i;
                if (next > n * m)
                    break;
                pair<int, int> cord = getCord(next);
                int x = cord.first;
                int y = cord.second;
                if (visited[x][y])
                    continue;
                visited[x][y] = true;
                if (board[x][y] == -1)
                    q.push(next);
                else
                    q.push(board[x][y]);
            }
        }
        steps++;
    }
    return -1;
}
int main() {}