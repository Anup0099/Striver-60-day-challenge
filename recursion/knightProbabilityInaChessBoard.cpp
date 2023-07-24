#include <bits/stdc++.h>
using namespace std;
int N;
vector<pair<int, int>> directions = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
double solve(int row, int column, int k)
{
    if (row < 0 || row >= N || column < 0 || column >= N)
    {
        return 0.0;
    }
    if (k == 0)
        return 1;
    double ans = 0;
    for (auto &it : directions)
    {
        int n_r = row + it.first;
        int n_c = column + it.second;
        ans = (double)solve(n_r, n_c, k - 1);
    }
    return ans;
}

double knightProbabilty(int n, int k, int row, int column)
{
    N = n;

    return solve(row, column, k);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}