#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &image, int sr, int sc, int color, vector<int> delrow, vector<int> delcol, int initialColor, vector<vector<int>> &ans)
{
    if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != initialColor)
    {
        return;
    }
    ans[sr][sc] = color;
    image[sr][sc] = -1;
    for (int i = 0; i < 4; i++)
    {
        dfs(image, sr + delrow[i], sc + delcol[i], color, delrow, delcol, initialColor, ans);
    }
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    int initalColor = image[sr][sc];
    vector<vector<int>> ans = image;
    vector<int> delrow = {-1, 0, 1, 0};
    vector<int> delcol = {0, 1, 0, -1};

    dfs(image, sr, sc, color, delrow, delcol, initalColor, ans);

    return ans;
}
int main() {}