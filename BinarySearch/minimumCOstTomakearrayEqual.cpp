#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll findCost(vector<int> &nums, vector<int> &cost, int target)
{
    ll cost = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        cost += (ll)abs(nums[i] - target) * cost[i];
    }
    return cost;
}
long long minimumCostToMakeArrayEqual(vector<int> &nums, vector<int> &cost)
{
    ll answer = INT_MAX;
    int right = *max_element(nums.begin(), nums.end());
    int left = *min_element(nums.begin(), nums.end());
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        ll cost1 = findCost(nums, cost, mid);
        ll cost2 = findCost(nums, cost, mid + 1);
        answer = min(cost1, cost2);
    }
    return answer;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}