#include <bits/stdc++.h>
using namespace std;
// given a 0-indexed 2d integer arrays nums represnting the coordinates of the cars parking on a numberline for index i nums[i]=[start i,end j]
// return the number of integer points on that line that are covered with any part of a card 6-3=3 5-1=4
int numberOFPoints(vector<vector<int>> &nums)
{
    // int n = nums.size();
    // sort(nums.begin(), nums.end());
    // int ans = 0;
    // int count = 0;
    // set<int> s;
    // for (int i = 0; i < n; i++)
    // {
    //     int start = nums[i][0]; // dekhli to ki holo tui frist e starting point niye niyechis and end point niye niyechhis har index er then check korechis j start and end er moddhe koto gula point ache and set e insert korechis
    //     int end = nums[i][1];
    //     for (int j = start; j <= end; j++)
    //     {
    //         s.insert(j);
    //     }
    // }
    // return s.size();
    // time complexity O(nlogn) because of sorting and space complexity O(n) because of set
    // optimized approach
    int n = nums.size();
    vector<int> v(10001, 0);
    for (auto it : nums)
    {
        v[it[0]]++;// ekhane v[it[0]]++ mane holo v[0] er index e 1 add korechis and v[it[1]+1]-- mane holo v[it[1]+1] er index e 1 minus korechis
        v[it[1] + 1]--;
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    int ans = 0, sum = 0;
    for (int i = 0; i < 100; i++)
    {
        sum += v[i];
        if (sum > 0)
        {
            ans++;
        }
    }
    return ans;
}
int main() {}