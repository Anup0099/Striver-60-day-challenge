#include <bits/stdc++.h>
using namespace std;
int findPivot(vector<int> &nums, int l, int r)
{
    int n = nums.size();
    while(l<r && nums[l]==nums[l+1])
    {
        l++;

    }
    while(l<r && nums[r]==nums[r-1])
    {
        r--;
    }
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (nums[l] < nums[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    return r;
}
bool bs(vector<int> &arr, int l, int r, int target)
{
    int n = arr.size();
    l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[mid] > arr[l])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return false;
}
bool search(vector<int> &arr, int target)
{
    int n = arr.size();
    int pivot = findPivot(arr, 0, n - 1);
    int result = bs(arr, 0, pivot - 1, target);
    if (result != -1)
        return true;
    return bs(arr, pivot, n - 1, target);
}
int main()
{
}
