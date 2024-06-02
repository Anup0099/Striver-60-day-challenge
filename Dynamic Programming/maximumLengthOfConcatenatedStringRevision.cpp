#include <bits/stdc++.h>
using namespace std;
bool checkUnique(string s)
{
    vector<int> freq(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
        if (freq[s[i] - 'a'] > 1)
        {
            return false;
        }
    }
    return true;
}
int solve(vector<string> &arr, int ind, string ans)
{
    if (ind == arr.size())
    {
        return ans.size();
    }
    int take = 0, notake = 0;
    if (checkUnique(ans + arr[ind]))
    {
        string temp = ans + arr[ind];
        take = solve(arr, ind + 1, temp);
    }
    notake = solve(arr, ind + 1, ans);
    return max(take, notake);
}
int maxLength(vector<string> &arr)
{
    int n = arr.size();
    string ans = "";
    return solve(arr, 0, ans);
}
int main()
{
    vector<string> arr = {"un", "iq", "ue"};
    cout << maxLength(arr) << endl;
    return 0;
}