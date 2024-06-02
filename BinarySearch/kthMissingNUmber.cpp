#include <bits/stdc++.h>
using namespace std;
int findKthMissingPositiveNUmber(vector<int> &arr, int k)
{
    int n = arr.size();
    sort(begin(arr), end(arr));
    int first = arr[0];
    int last = arr[n - 1];
    vector<int> temp;
    for (int i = 1; i <= last; i++)
    {
        temp.push_back(i);
    }
    set<int> st(begin(arr), end(arr));
    for (int i = 0; i < temp.size(); i++)
    {
        if (st.find(temp[i]) == st.end())
        {
            k--;
        }
        if (k == 0)
        {
            return temp[i];
        }
    }
    return -1;
}
int solve(vector<int> &arr, int k)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
            k++;
        else
            break;
    }
    return k;
}
int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    cout << solve(arr, 5);
}