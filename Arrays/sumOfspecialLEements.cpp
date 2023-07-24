#include <bits/stdc++.h>
using namespace std;
int specialElements(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    int sum = 1;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(nums[i]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        sum = v[i] * v[i];
        ans += sum;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}