#include <bits/stdc++.h>
using namespace std;
// Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

// Only numbers 1 through 9 are used.
// Each number is used at most once.
// Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

vector<vector<int>> combinationSum3(int k, int n)
{
    vector<vector<int>> ans;
    vector<int> temp;
}
string longestCommonPrefix(string str[], int n)
{
    string ans = "";
    int minLen = INT_MAX;
    for(int i=0;i<n;i++){
        minLen = min(minLen,(int)str[i].length());
    }
    for(int i=0;i<minLen;i++){
        char curr = str[0][i];
        for(int j=1;j<n;j++){
            if(str[j][i]!=curr){
                return ans;
            }
        }
        ans.push_back(curr);
    }
    return ans;
}

int main()
{
    int k = 3, n = 7;
    vector<vector<int>> ans = combinationSum3(k, n);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}