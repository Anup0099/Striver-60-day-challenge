#include <bits/stdc++.h>
using namespace std;
// You are given a 2D 0-indexed integer array dimensions.

// For all indices i, 0 <= i < dimensions.length, dimensions[i][0] represents the length and dimensions[i][1] represents the width of the rectangle i.

// Return the area of the rectangle having the longest diagonal. If there are multiple rectangles with the longest diagonal, return the area of the rectangle having the maximum area.
int maxArea(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int maxval = 0;
    int maxArea = 0;
    for (int i = 0; i < n; i++)
    {
        int len = arr[i][0];
        int wid = arr[i][1];
        int diag = (len * len + wid * wid);

        if (diag > maxval || (diag == maxval && len * wid > maxArea))
        {
            maxval = diag;
            maxArea = len * wid;
        }
    }
    return maxArea;
}
int main()
{
    // [[10,3],[5,9],[8,3]]
    // [[1,10],[3,10],[4,4],[2,6],[6,3],[6,4],[9,1],[6,1],[2,3]];
    vector<vector<int>> arr = {{1, 10}, {3, 10}, {4, 4}, {2, 6}, {6, 3}, {6, 4}, {9, 1}, {6, 1}, {2, 3}};
    vector<vector<int>> arr1 = {{10, 3}, {5, 9}, {8, 3}};
    cout << maxArea(arr1);
}