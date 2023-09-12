#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]+1 != nums[i + 1])
        {
            ans = nums[i] + 1;
            break;
        }
    }
    cout << ans << endl;
}