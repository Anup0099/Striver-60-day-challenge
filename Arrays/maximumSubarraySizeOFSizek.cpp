#include <bits/stdc++.h>
using namespace std;
vector<int> max_of_subarrays(vector<int> arr, int n, int k)
{
    // your code here
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int max = INT_MIN;
        for (int j = i; j < n-k+1; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }
        ans.push_back(max);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {4,1,2,3,6};
    int n = v.size();
    int k = 2;
    vector<int> ans = max_of_subarrays(v, n, k);
    for (auto i : ans)
    {
        cout << i << " ";
    }

}