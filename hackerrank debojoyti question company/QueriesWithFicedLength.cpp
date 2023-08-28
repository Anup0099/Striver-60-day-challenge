#include <bits/stdc++.h>
using namespace std;
// Consider an -integer sequence, . We perform a query on  by using an integer, , to calculate the result of the following expression:

// In other words, if we let , then you need to calculate .

// Given  and  queries, return a list of answers to each query.

// Example

// The first query uses all of the subarrays of length : . The maxima of the subarrays are . The minimum of these is .

// The second query uses all of the subarrays of length : . The maxima of the subarrays are . The minimum of these is .

// Return .

// Function Description

// Complete the solve function below.

// solve has the following parameter(s):

// int arr[n]: an array of integers
// int queries[q]: the lengths of subarrays to query
// Returns

// int[q]: the answers to each query
// Input Format

// The first line consists of two space-separated integers,  and .
// The second line consists of  space-separated integers, the elements of .
// Each of the  subsequent lines contains a single integer denoting the value of  for that query.
// vector<int> solve(vector<int> arr, vector<int> queries)
// {
//     vector<int> ans;
//     int n = arr.size();
//     int q = queries.size();
//     int minimum_ans = INT_MAX;
//     int maxi = INT_MIN;
//     // queries =1 2 3 4 5
//     for (int i = 0; i < q; i++)
//     {
//         vector<int> temp;
//         int k = queries[i];
//         // cout << k << endl;
//         // find maximum of all subarrays of length k
//         for (int j = 0; j < n - k + 1; j++)
//         {
//             maxi = INT_MIN;
//             for (int l = j; l < j + k; l++)
//             {
//                 maxi = max(maxi, arr[l]);
//             }
//             temp.push_back(maxi);
//         }
//         // for (int j = 0; j < temp.size(); j++)
//         // {
//         //     cout << temp[j] << " ";
//         // }
//         // cout << endl;
//         // find minimum of all maximums
//         int minimum_element = *min_element(temp.begin(), temp.end());
//         // cout << minimum_element << endl;
//         ans.push_back(minimum_element);
//     }
//     return ans;
// }
vector<int> solve(vector<int> &arr, vector<int> queries)
{
    int n = arr.size();
    int m = queries.size();
    deque<int> deq;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        while (!deq.empty() and arr[deq.back()] <= arr[i])
        {
            deq.pop_back();
        }
        deq.push_back(i);
        if (i >= queries[0] - 1)
        {
            ans.push_back(arr[deq.front()]);
        }
    }
    for (int i = 1; i < m; i++)
    {
        while (!deq.empty() and deq.front() <= i - 1)
        {
            deq.pop_front();
        }
        while (!deq.empty() and arr[deq.back()] <= arr[i + queries[i] - 1])
        {
            deq.pop_back();
        }
        deq.push_back(i + queries[i] - 1);
    }
    ans.push_back(arr[deq.front()]);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> queries(q);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
    }
    vector<int> ans = solve(arr, queries);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}