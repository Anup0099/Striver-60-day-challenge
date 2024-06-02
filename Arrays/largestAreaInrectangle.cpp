#include <bits/stdc++.h>
using namespace std;
int largestAreaInReactangle(vector<int> &heights)
{
    int n = heights.size();
    int maxArea = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int count = 1;
    //     int area = 0;
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (heights[j] >= heights[i])
    //         {
    //             count++;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     for (int j = i-1; j >=0; j--)
    //     {
    //         if (heights[j] >= heights[i])
    //         {
    //             count++;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     area = count * heights[i];
    //     maxArea = max(maxArea, area);
    // }
    // return maxArea;
    stack<int> s;
    vector<int> left(n), right(n);
    
}
int main()
{
}