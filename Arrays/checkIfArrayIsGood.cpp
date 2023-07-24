#include <bits/stdc++.h>
using namespace std;
bool isGood(vector<int> &nums)
{
    // int n = nums.size();
    // int maxi = *max_element(nums.begin(), nums.end());
    // if (n > maxi+1)
    //     return false;
    // sort(nums.begin(), nums.end());
    // bool flag = false;

    // for (int i = 0; i < n - 2; i++)
    // {
    //     if (nums[i] == i + 1)
    //     {
    //         flag = true;
    //     }
    // }
    // if (nums[n - 1] == maxi and nums[n-2]==maxi)
    //     return true;
    // return false;
     int n = *max_element(nums.begin(), nums.end());
    
    // Step 1: Check if the array length is n+1
    if (nums.size() != n + 1) {
        return false;
    }
    
    // Step 2: Count occurrences of each number
    unordered_map<int, int> occurrences;
    for (int num : nums) {
        occurrences[num]++;
    }

    // Ensure each number from 1 to n-1 occurs exactly once, and n occurs twice
    for (int i = 1; i <= n; i++) {
        if (occurrences[i] != 1) {
            return false;
        }
    }
    
    // Check if n occurs twice
    if (occurrences[n] != 2) {
        return false;
    }
    
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}