#include <bits/stdc++.h>
using namespace std;
bool isPal(int n)
{
    string s = to_string(n);
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}
long long minimumCost(vector<int> &nums)
{
    int n = nums.size();
    long long ans = 0;
    sort(begin(nums), end(nums));
    long long cost = 1e18;
    // we have to find the median of the array
    long long median;
    if (n % 2 == 0)
    {
        median = (nums[n / 2] + nums[(n / 2) - 1]) / 2;
    }
    else
    {
        median = nums[n / 2];
    }
    // we have to find the minimum palindrome number which is closest to the median
    long long minPal = 1e18;
    for (int i = 0; i <= 100000; i++)
    {
        if (isPal(median - i))
        {
            minPal = median - i;
            break;
        }
        if (isPal(median + i))
        {
            minPal = median + i;
            break;
        }
    }
    // now we have to find the cost of making the array equilindrome
    for (int i = 0; i < n; i++)
    {
        ans += abs(nums[i] - minPal);
    }

    return ans;
}
// 22,33,22,33,22
// 10,12,13,14,15
// 1,2,3,4,5
long long minimumCOst(vector<int> &nums)
{
    long long n = nums.size();
    sort(begin(nums), end(nums));
    long long cost = 1e18, l = nums[n / 2], r = l;
    while (l > 0 && isPal(l) == false)
    {
        l--;
    }
    while (r > 0 && !isPal(r))
    {
        r++;
    }
    cout<<l<<" "<<r<<endl;
    for (auto x : {l, r})
    {
        // here we are finding the cost of making the array equilindrome with the median as x and then we are taking the minimum of the two costs obtained  and returning it as the answer
        long long sum = 0;
        for (auto y : nums)
        {
            sum += abs(y - x);
        }
        if (sum <= cost)
            cost = sum;
    }
    return cost;
}   
int main()
{
    vector<int> nums = {10, 12, 13, 14, 15};
    cout << minimumCOst(nums);
}