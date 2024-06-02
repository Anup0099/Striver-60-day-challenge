/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int addedInteger(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int diff = abs(nums2[i] - nums1[i]);
        mp[diff]++;
    }
    int ans = 0;
    for(auto it:mp)
    {
        ans=it.first;
        break;  
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}