/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int numberOfPairs(vector<int> &nums1, vector<int> &nums2, int k)
{
    int n = nums1.size();
    int m = nums2.size();
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        nums2[i] = nums2[i] * k;
    }
    sort(nums2.begin(), nums2.end());
    // we have to find pairs that nums1[i] is divisible by nums2[j] count in logn time complexity
    
}
// long long numberOfPairs2(vector<int> &nums1, vector<int> &nums2, int k)
// {
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums1 = {1, 3, 4};
    vector<int> nums2 = {1, 3, 4};
    int k = 1;
    cout << numberOfPairs(nums1, nums2, k);
}