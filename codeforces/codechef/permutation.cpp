#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr, int ind, vector<vector<int>> &ans)
{
    if (ind == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for (int i = ind; i < arr.size(); i++)
    {
        swap(arr[ind], arr[i]);

        solve(arr, ind + 1, ans);
        swap(arr[ind], arr[i]);
    }
}
vector<vector<int>> permutation(vector<int> &arr)
{
    vector<vector<int>> ans;

    int n = arr.size();
    solve(arr, 0, ans);
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = permutation(arr);
    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}