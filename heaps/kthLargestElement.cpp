#include <bits/stdc++.h>
using namespace std;
int kthLargestElement(vector<int> &nums, int k)
{
    int n = nums.size();
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < n; i++)
    {
        p.push(nums[i]);
    }
    cout << p.size();
    while (k > 1)
    {
        p.pop();
        k--;
    }

    return p.top();
}
int kthsmallestElement(vector<int> &arr, int k)
{
    int n = arr.size();
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    // while (pq.size() > k)
    // {

    //     pq.pop();
    // }
    return pq.top();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << kthsmallestElement(nums, k);
}