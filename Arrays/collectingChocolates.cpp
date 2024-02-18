#include <bits/stdc++.h>
using namespace std;
long long minCost(vector<int> &nums, int x)
{
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    cout<<sum<<endl;
    int mini = *min_element(nums.begin(), nums.end());
    int temp = 0;
    for (int i = 1; i < n; i++)
    {
        temp += mini + x;
    }
    temp += mini;
    return min(temp, sum);
}
int main()
{
    vector<int> nums = {31, 25, 18, 59};

    int x = 27;
    cout << minCost(nums, x) << endl;
}