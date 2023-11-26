#include <bits/stdc++.h>
using namespace std;
vector<int> sortArray(vector<int> &arr)
{
    vector<int> ans;
    if (arr.size() == 1)
    {
        ans.push_back(arr[0]);
        return ans;
    }
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    ans = sortArray(arr);
    int i = 0;
    while (i < ans.size() && ans[i] < temp)
    {
        i++;
    }
    ans.insert(ans.begin() + i, temp);
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 6, 5};
    int n = arr.size();
    vector<int> ans = sortArray(arr);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

}