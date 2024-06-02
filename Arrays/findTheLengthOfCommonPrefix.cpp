#include <bits/stdc++.h>
using namespace std;

int longestCommonPrefix(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string str = to_string(arr1[i]);
        string s1 = "";
        for (int j = 0; j < str.length(); j++)
        {
            s1 += str[j];
            s.insert(s1);
        }

    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        string str = to_string(arr2[i]);
        string s1 = "";
        for (int j = 0; j < str.length(); j++)
        {
            s1 += str[j];
            if (s.find(s1) != s.end())
            {
                ans = max(ans, (int)s1.length());
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> arr1 = {1, 10, 100};
    vector<int> arr2 = {1000};
    cout << longestCommonPrefix(arr1, arr2) << endl;
    return 0;
}