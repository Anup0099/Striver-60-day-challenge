#include <bits/stdc++.h>
using namespace std;
// you are hiker given 2d array where height[row][col] represents height of a cell (row,col) i am in 0,0 we have to reach row-1,col-1 you can move up down left right we have to find a minimum route who maximum absolute difference between two cell is minimum
int minimumEffortPath(vector<vector<int>> &heights)
{
  int n = heights.size();
  int m = heights[0].size();
}
vector<int> fullBloomFlowers(vector<vector<int>> &flowers, vector<int> &people)
{
  int m = flowers.size();
  int n = people.size();
  vector<int> ans(n);
  vector<int> start(m);
  vector<int> end(m);

  for (int i = 0; i < m; i++)
  {
    start[i] = flowers[i][0];
    end[i] = flowers[i][1];
  }
  sort(start.begin(), start.end());
  sort(end.begin(), end.end());
  for (int i = 0; i < n; i++)
  {
    int bloomed_already = upper_bound(start.begin(), start.end(), people[i]) - start.begin();
    int yet_to_bloom = lower_bound(end.begin(), end.end(), people[i]) - end.begin();
    ans[i] = bloomed_already - yet_to_bloom;
  }
  return ans;
}
int main() {}