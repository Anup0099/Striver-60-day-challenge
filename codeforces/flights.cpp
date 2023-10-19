#include <bits/stdc++.h>
using namespace std;
// As you may know, MemSQL has American offices in both San Francisco and Seattle. Being a manager in the company, you travel a lot between the two cities, always by plane.

// You prefer flying from Seattle to San Francisco than in the other direction, because it's warmer in San Francisco. You are so busy that you don't remember the number of flights you have made in either direction. However, for each of the last n days you know whether you were in San Francisco office or in Seattle office. You always fly at nights, so you never were at both offices on the same day. Given this information, determine if you flew more times from Seattle to San Francisco during the last n days, or not.
vector<int> sortArrayByParity(vector<int> &nums)
{
    int n= nums.size();
    vector<int> ans(n);
    for(int i=0;i<n;i++)
    {
        if(nums[i]%2==0)
            ans.push_back(nums[i]);

        

    }
    for(int i=0;i<n;i++)
    {
        if(nums[i]%2!=0)
            ans.push_back(nums[i]);

        

    }
    return ans;

}
int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int sf = 0, se = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'S' && s[i + 1] == 'F')
            sf++;
        else if (s[i] == 'F' && s[i + 1] == 'S')
            se++;
    }
    if (sf > se)
        cout << "YES";
    else
        cout << "NO";
}